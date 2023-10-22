/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 14:43:53 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/10/07 04:56:38 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_gamemap	*gamemap;
	int			fd;

	if (ac == 2)
	{
		gamemap = (t_gamemap *)malloc(sizeof(t_gamemap));
		ft_memset(gamemap, 0, sizeof(t_gamemap));
		fd = open(av[1], O_RDONLY);
		if (!ft_strnstr(av[1], ".ber", ft_strlen(av[1])))
			errors(6);
		map_rd(gamemap, fd);
		map_check(gamemap);
		valider(gamemap);
		drawing(gamemap);
	}
	else
		ft_printf("ERROR: You should have exactly 2 arguments\n");
}
