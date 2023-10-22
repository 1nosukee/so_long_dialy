/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 06:10:55 by wfaouzi           #+#    #+#             */
/*   Updated: 2023/10/07 02:50:04 by wfaouzi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "./ft_printf/ft_printf.h"
# include "./my_libft/libft.h"
# include "./my_get_next_line/get_next_line.h"
# include <fcntl.h>
# include <mlx.h>
# include <stdlib.h>
# include <string.h>

typedef struct s_gamemap
{
	int		posy_p;
	int		posx_e;
	int		posy_e;
	int		count_p;
	int		count_c;
	int		count_e;
	int		posx_p;
	int		paths;
	int		i;
	int		j;
	void	*mlx;
	void	*win;
	char	*t_0;
	char	*t_1;
	char	*t_p;
	char	*t_e;
	char	*t_c;
	void	*i_0;
	void	*i_1;
	void	*i_p;
	void	*i_e;
	void	*i_c;
	int		img_3ard;
	int		img_tol;
	int		h_ster;
	int		v_ster;
	char	**mappin;

}			t_gamemap;

void		map_rd(t_gamemap *gamemap, int fd);
void		victory(t_gamemap *gamemap);
void		init(t_gamemap *gamemap);
void		drawing(t_gamemap *gamemap);
void		actualdraw(t_gamemap *gamemap);
int			quit(void);
void		enter(t_gamemap *gamemap);
void		errors(int code);
void		pointur(int *i, int *j, t_gamemap *gamemap);
int			presse(int press, t_gamemap *gamemap);
int			up(int press, t_gamemap *gamemap);
int			down(int press, t_gamemap *gamemap);
void		drawright(t_gamemap *gamemap);
void		drawleft(t_gamemap *gamemap);
void		drawup(t_gamemap *gamemap);
void		drawdown(t_gamemap *gamemap);
void		mostatil(t_gamemap *gamemap);
void		checker(t_gamemap *gamemap);
void		walls(t_gamemap *gamemap);
void		map_check(t_gamemap *gamemap);
int			valider(t_gamemap *gamemap);

#endif