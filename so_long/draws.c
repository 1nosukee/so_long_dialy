/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draws.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 08:18:49 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/09/24 00:45:00 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	drawright(t_gamemap *gamemap)
{
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_0,
		(gamemap->posx_p + 1) * 32, gamemap->posy_p * 32);
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_p,
		(gamemap->posx_p + 1) * 32, gamemap->posy_p * 32);
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_0,
		gamemap->posx_p * 32, gamemap->posy_p * 32);
}

void	drawleft(t_gamemap *gamemap)
{
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_0,
		(gamemap->posx_p - 1) * 32, gamemap->posy_p * 32);
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_p,
		(gamemap->posx_p - 1) * 32, gamemap->posy_p * 32);
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_0,
		gamemap->posx_p * 32, gamemap->posy_p * 32);
}

void	drawup(t_gamemap *gamemap)
{
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_0,
		gamemap->posx_p * 32, (gamemap->posy_p - 1) * 32);
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_p,
		gamemap->posx_p * 32, (gamemap->posy_p - 1) * 32);
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_0,
		gamemap->posx_p * 32, gamemap->posy_p * 32);
}

void	drawdown(t_gamemap *gamemap)
{
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_0,
		gamemap->posx_p * 32, (gamemap->posy_p + 1) * 32);
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_p,
		gamemap->posx_p * 32, (gamemap->posy_p + 1) * 32);
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_0,
		gamemap->posx_p * 32, gamemap->posy_p * 32);
}
