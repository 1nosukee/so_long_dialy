NAME = so_long

CC = cc

GCC = -Wall -Werror -Wextra

MLX = -lmlx -framework OpenGL -framework AppKit

SRCS = 	main.c\
		./my_get_next_line/get_next_line.c\
		./my_get_next_line/get_next_line_utils.c\
		draws.c\
		checker.c\
		errors.c\
		keys.c\
		map_read.c\
		render.c\


OBJECTS = ${SRCS:.c=.o}

UTILS = ./my_libft/libft.a

all : ${NAME}

${NAME} : ${OBJECTS}
	make all -C ./my_libft/
	make all -C ./ft_printf/
	${CC} ${GCC} ${MLX} ${SRCS} ${UTILS} ./ft_printf/printf.a -o ${NAME}

clean:
	make clean -C ./my_get_next_line/
	make clean -C ./my_libft/
	make clean -C ./ft_printf/
	rm -rf $(OBJECTS)

fclean: clean
	make fclean -C ./my_get_next_line/
	make clean -C ./my_libft/
	make clean -C ./ft_printf/

	rm -rf so_long
	rm -rf $(UTILS)

re: fclean all
