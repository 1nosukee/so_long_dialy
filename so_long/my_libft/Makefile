SRCS= $(wildcard ft_*.c)

OBJS	= $(SRCS:.c=.o)

NAME= libft.a

CC= cc

CFLAGS	= -Wall -Wextra -Werror # -fsanitize=address -g

RM = rm -f

all:$(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:clean
	$(RM) $(NAME)

re: fclean all
