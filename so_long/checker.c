/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 08:22:35 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/09/24 02:24:27 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	mostatil(t_gamemap *gamemap)
{
	int	i;

	i = 0;
	while (gamemap->mappin[i])
	{
		if ((int)ft_strlen(gamemap->mappin[i]) != gamemap->h_ster)
			errors(1);
		i++;
	}
	if (i != gamemap->v_ster)
		errors(5);
}

void	checker(t_gamemap *gamemap)
{
	while (gamemap->j < gamemap->v_ster)
	{
		while (gamemap->i < gamemap->h_ster)
		{
			if (gamemap->mappin[gamemap->j][gamemap->i] == 'P')
			{
				gamemap->count_p++;
				gamemap->posx_p = gamemap->i;
				gamemap->posy_p = gamemap->j;
			}
			if (gamemap->mappin[gamemap->j][gamemap->i] == 'E')
			{
				gamemap->count_e++;
				gamemap->posx_e = gamemap->i;
				gamemap->posy_e = gamemap->j;
			}
			if (gamemap->mappin[gamemap->j][gamemap->i] == 'C')
				gamemap->count_c++;
			gamemap->i++;
		}
		gamemap->i = 0;
		gamemap->j++;
	}
}

void	walls(t_gamemap *gamemap)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (j < gamemap->v_ster)
	{
		if (gamemap->mappin[j][0] != '1')
			errors(2);
		if (gamemap->mappin[j][gamemap->h_ster - 1] != '1')
			errors(2);
		while (i < gamemap->h_ster)
		{
			if (gamemap->mappin[0][i] != '1')
				errors(2);
			if (gamemap->mappin[gamemap->v_ster - 1][i] != '1')
				errors(2);
			i++;
		}
		i = 0;
		j++;
	}
}

void	map_check(t_gamemap *gamemap)
{
	mostatil(gamemap);
	checker(gamemap);
	if (gamemap->count_p != 1 || gamemap->count_e != 1 || gamemap->count_c == 0)
	{
		errors(0);
	}
	walls(gamemap);
}

int	valider(t_gamemap *gamemap)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < gamemap->v_ster)
	{
		while (i < gamemap->h_ster)
		{
			if (gamemap->mappin[j][i] != '0' && gamemap->mappin[j][i] != '1'
				&& gamemap->mappin[j][i] != 'P' && gamemap->mappin[j][i] != 'E'
				&& gamemap->mappin[j][i] != 'C')
				errors(4);
			i++;
		}
		j++;
	}
	return (1);
}
