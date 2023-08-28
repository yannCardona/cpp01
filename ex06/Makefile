CC = c++

CFLAGS = -Werror -Wextra -Wall -std=c++98

SRC = Harl.cpp main.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = harlFilter

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