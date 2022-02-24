NAME = Zombie

SRC = Zombie.cpp main.cpp

FLAGS = -std=c++98 -Wall -Wextra -Werror

OBJS = $(SRC:.cpp=.o)

.o:.cpp
	g++ $(FLAGS) $(OBJS) -o NAME

clean:
	/bin/rm -rf $(OBJS)

fclean: clean
	/bin/rm -rf $(NAME)

re: fclean all