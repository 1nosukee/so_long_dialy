/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 15:07:26 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/09/24 01:00:42 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	errors(int code)
{
	if (code == 0)
		ft_printf("ERROR: Missing some elementary stuff.\n");
	if (code == 1)
		ft_printf("ERROR: Map not rectangular.\n");
	if (code == 2)
		ft_printf("ERROR: Your wall is broken.\n");
	if (code == 3)
		ft_printf("ERROR: You map file doesn't have '.ber' extension\n");
	if (code == 4)
		ft_printf("ERROR: Sus element in your map file\n");
	if (code == 5)
		ft_printf("ERROR: Empty line in map file\n");
	exit(1);
}

void	enter(t_gamemap *gamemap)
{
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_e,
		gamemap->posx_e * 32, gamemap->posy_e * 32);
	mlx_put_image_to_window(gamemap->mlx, gamemap->win, gamemap->i_p,
		gamemap->posx_e * 32, gamemap->posy_e * 32);
}
