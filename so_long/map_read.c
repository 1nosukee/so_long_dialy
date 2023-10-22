/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:29:13 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/09/24 02:24:40 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	map_rd(t_gamemap *gamemap, int fd)
{
	char	*line;
	char	*long_line;

	long_line = ft_calloc(1, 1);
	line = get_next_line(fd);
	if (!line)
		errors(5);
	gamemap->h_ster = ft_strlen(line) - 1;
	while (line)
	{
		long_line = ft_strjoin(long_line, line);
		gamemap->v_ster++;
		free(line);
		line = get_next_line(fd);
	}
	gamemap->mappin = ft_split(long_line, '\n');
	free(long_line);
}

void	victory(t_gamemap *gamemap)
{
	ft_printf("ez win!\n");
	free(gamemap);
	exit(0);
}
