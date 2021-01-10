CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a
RM = rm -f

SRCS = ft_memset.c\
	   ft_memcpy.c\
	   ft_memchr.c\
	   ft_memccpy.c\
	   ft_memmove.c
OBJS = $(SRCS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)
clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean $(NAME)

.PHONY: all clean fclean re
