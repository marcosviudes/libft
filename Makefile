.DELETE_ON_ERROR:

NAME	= libft.a
LIB		= ar rcs
RM		= rm -rf
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror -Wpedantic

INCLUDE	=	libft.h
SRCS	=	ft_bzero.c\
			ft_memcpy.c\
			ft_memset.c
BSRCS	=
OBJS	=$(SRCS:.c=.o)
BOBJS	=$(BSRCS:.c=.o)


all: $(NAME)

so:
	$(CC) -fPIC $(CFLAGS) $(SRCS)
	$(CC) -shared -o libft.so $(OBJS)
$(NAME): $(OBJS)
	@ $(LIB) $(NAME) $(OBJS)
	@ echo "$(NAME) Compiled"
bonus: $(OBJS) $(BOBJS)
	@ $(LIB) $(NAME) $(OBJS)
	@ echo "$(NAME) Compiled with bonus"
clean:
	@ $(RM) $(OBJS) $(BOBJS)
	@ echo	"All objs removed"
fclean: clean
	@ $(RM) $(NAME)
	@ echo "$(NAME) removed"
re:		fclean all

.PHONY: all clean fclean re debug
