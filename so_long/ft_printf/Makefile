# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wfaouzi <wfaouzi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 18:29:55 by wfaouzi           #+#    #+#              #
#    Updated: 2023/09/23 12:08:14 by wfaouzi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = printf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRC = ft_putchar.c ft_putsss.c ft_putnbr.c ft_pointer.c ft_printf.c  ft_unsidecimal.c ft_hexadicimal.c

OBJ = ${SRC:.c=.o}

all : $(NAME)

$(NAME) : $(OBJ)
		ar rcs $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ)

fclean : clean
	rm -rf $(NAME)

re : fclean all