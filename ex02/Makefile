CC = c++

CFLAGS = -Werror -Wextra -Wall -std=c++98

SRC = main.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = brain

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