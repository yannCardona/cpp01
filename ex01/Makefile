CC = c++

CFLAGS = -Werror -Wextra -Wall -std=c++98

SRC = Zombie.cpp main.cpp zombieHorde.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = zombieHorde

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	@-$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@-rm -f $(OBJ)

fclean: clean
	@-rm -f $(NAME)

re: fclean all