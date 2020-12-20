.DELETE_ON_ERROR:

NAME	:= libft.a
LIB		:= ar rcs
RM		:= rm -rf
CC		:= gcc
CFLAGS	:= -o -Wall -Wextra -Werror

INCLUDE	:=	libft.h
SRCS	:=	ft_bzero.c\
			ft_memcpy.c\
			ft_memset.c
BSRCS	:= 
OBJS	:= $(SRCS:.c=.o)

$(OBJS):
	$(CC)$(CFLAGS)$(SRCS)

$(BONUS:
	$(CC)$(CFLAGS)$(BSRCS)

$(NAME): OBJS INCLUDE
	$(LIB)$(NAME)$(OBJS)

bonus: OBJS BONUS INCLUDE
	$(CC)$(NAME)$(OBJS)$(BONUS)

all: $(NAME)
	$(LIB)$(OBJS)

clean:
	$(RM)$(OBJS) $(BONUS)

fclean: clean
	$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re debug
