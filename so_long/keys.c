/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:09:56 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/09/24 00:45:23 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	up(int press, t_gamemap *gamemap)
{
	if (press == 13 || press == 126)
	{
		if (gamemap->mappin[gamemap->posy_p - 1][gamemap->posx_p] != '1')
		{
			if (gamemap->mappin[gamemap->posy_p - 1][gamemap->posx_p] == 'C')
			{
				gamemap->mappin[gamemap->posy_p - 1][gamemap->posx_p] = '0';
				gamemap->count_c--;
			}
			drawup(gamemap);
			gamemap->posy_p--;
			if (gamemap->mappin[gamemap->posy_p][gamemap->posx_p] == 'E')
			{
				enter(gamemap);
				if (gamemap->count_c == 0)
					victory(gamemap);
			}
			else
				mlx_put_image_to_window(gamemap->mlx, gamemap->win,
					gamemap->i_e, gamemap->posx_e * 32, gamemap->posy_e * 32);
			gamemap->paths++;
			ft_printf("Moves: %d \r", gamemap->paths);
		}
	}
	return (0);
}

int	down(int press, t_gamemap *gamemap)
{
	if (press == 1 || press == 125)
	{
		if (gamemap->mappin[gamemap->posy_p + 1][gamemap->posx_p] != '1')
		{
			if (gamemap->mappin[gamemap->posy_p + 1][gamemap->posx_p] == 'C')
			{
				gamemap->mappin[gamemap->posy_p + 1][gamemap->posx_p] = '0';
				gamemap->count_c--;
			}
			drawdown(gamemap);
			gamemap->posy_p++;
			if (gamemap->mappin[gamemap->posy_p][gamemap->posx_p] == 'E')
			{
				enter(gamemap);
				if (gamemap->count_c == 0)
					victory(gamemap);
			}
			else
				mlx_put_image_to_window(gamemap->mlx, gamemap->win,
					gamemap->i_e, gamemap->posx_e * 32, gamemap->posy_e * 32);
			gamemap->paths++;
			ft_printf("Moves: %d \r", gamemap->paths);
		}
	}
	return (0);
}

int	left(int press, t_gamemap *gamemap)
{
	if (press == 0 || press == 123)
	{
		if (gamemap->mappin[gamemap->posy_p][gamemap->posx_p - 1] != '1')
		{
			if (gamemap->mappin[gamemap->posy_p][gamemap->posx_p - 1] == 'C')
			{
				gamemap->mappin[gamemap->posy_p][gamemap->posx_p - 1] = '0';
				gamemap->count_c--;
			}
			drawleft(gamemap);
			gamemap->posx_p--;
			if (gamemap->mappin[gamemap->posy_p][gamemap->posx_p] == 'E')
			{
				enter(gamemap);
				if (gamemap->count_c == 0)
					victory(gamemap);
			}
			else
				mlx_put_image_to_window(gamemap->mlx, gamemap->win,
					gamemap->i_e, gamemap->posx_e * 32, gamemap->posy_e * 32);
			gamemap->paths++;
			ft_printf("Moves: %d \r", gamemap->paths);
		}
	}
	return (0);
}

int	right(int press, t_gamemap *gamemap)
{
	if (press == 2 || press == 124)
	{
		if (gamemap->mappin[gamemap->posy_p][gamemap->posx_p + 1] != '1')
		{
			if (gamemap->mappin[gamemap->posy_p][gamemap->posx_p + 1] == 'C')
			{
				gamemap->mappin[gamemap->posy_p][gamemap->posx_p + 1] = '0';
				gamemap->count_c--;
			}
			drawright(gamemap);
			gamemap->posx_p++;
			if (gamemap->mappin[gamemap->posy_p][gamemap->posx_p] == 'E')
			{
				enter(gamemap);
				if (gamemap->count_c == 0)
					victory(gamemap);
			}
			else
				mlx_put_image_to_window(gamemap->mlx, gamemap->win,
					gamemap->i_e, gamemap->posx_e * 32, gamemap->posy_e * 32);
			gamemap->paths++;
			ft_printf("Moves: %d \r", gamemap->paths);
		}
	}
	return (0);
}

int	presse(int press, t_gamemap *gamemap)
{
	up(press, gamemap);
	down(press, gamemap);
	left(press, gamemap);
	right(press, gamemap);
	if (press == 53)
		exit(1);
	return (0);
}
