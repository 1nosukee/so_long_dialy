/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 18:49:18 by calmouht          #+#    #+#             */
/*   Updated: 2023/09/24 02:32:46 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init(t_gamemap *gamemap)
{
	gamemap->mlx = mlx_init();
	gamemap->t_0 = "./textures/0.xpm";
	gamemap->t_1 = "./textures/1.xpm";
	gamemap->t_p = "./textures/p.xpm";
	gamemap->t_e = "./textures/e.xpm";
	gamemap->t_c = "./textures/c.xpm";
	gamemap->i_0 = mlx_xpm_file_to_image(gamemap->mlx, gamemap->t_0,
			&gamemap->img_3ard, &gamemap->img_tol);
	gamemap->i_1 = mlx_xpm_file_to_image(gamemap->mlx, gamemap->t_1,
			&gamemap->img_3ard, &gamemap->img_tol);
	gamemap->i_p = mlx_xpm_file_to_image(gamemap->mlx, gamemap->t_p,
			&gamemap->img_3ard, &gamemap->img_tol);
	gamemap->i_e = mlx_xpm_file_to_image(gamemap->mlx, gamemap->t_e,
			&gamemap->img_3ard, &gamemap->img_tol);
	gamemap->i_c = mlx_xpm_file_to_image(gamemap->mlx, gamemap->t_c,
			&gamemap->img_3ard, &gamemap->img_tol);
}

void	drawing(t_gamemap *gamemap)
{
	init(gamemap);
	gamemap->win = mlx_new_window(gamemap->mlx, gamemap->h_ster * 32,
			gamemap->v_ster * 32, "league_of_legends.exe");
	actualdraw(gamemap);
	mlx_hook(gamemap->win, 17, 0, quit, NULL);
	mlx_key_hook(gamemap->win, presse, gamemap);
	mlx_loop(gamemap->mlx);
}

void	pointur(int *i, int *j, t_gamemap *gamemap)
{
	if (gamemap->mappin[*j][*i] == '0' || gamemap->mappin[*j][*i] == 'E'
		|| gamemap->mappin[*j][*i] == 'P' || gamemap->mappin[*j][*i] == 'C')
	{
		mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_0, *i
			* 32, *j * 32);
	}
	if (gamemap->mappin[*j][*i] == '1')
		mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_1, *i
			* 32, *j * 32);
	if (gamemap->mappin[*j][*i] == 'P')
		mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_p, *i
			* 32, *j * 32);
	if (gamemap->mappin[*j][*i] == 'E')
		mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_e, *i
			* 32, *j * 32);
	if (gamemap->mappin[*j][*i] == 'C')
		mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_c, *i
			* 32, *j * 32);
}

void	actualdraw(t_gamemap *gamemap)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (j < gamemap->v_ster)
	{
		while (i < gamemap->h_ster)
		{
			pointur(&i, &j, gamemap);
			i++;
		}
		i = 0;
		j++;
	}
}

int	quit(void)
{
	exit(0);
	return (0);
}
