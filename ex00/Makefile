NAME =	megaphone

SRCS =	megaphone.cpp \

CC = c++

FLAGS = -std=c++98 -Wall -Wextra -Werror

OBJS = $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CC)  $(FLAGS) $(OBJS) -o $(NAME)
clean:
		rm -f $(OBJS)

fclean:
		rm -f $(OBJS) $(NAME)

re:		fclean $(NAME)

.PHONY:	all clean fclean re
