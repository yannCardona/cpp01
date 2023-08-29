CC = c++

CFLAGS = -Werror -Wextra -Wall -std=c++98

SRC = main.cpp Sed.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = sed

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

%.o: %.cpp
	@-$(CC) $(CFLAGS) -c -o $@ $<

tests:
	@if [ ! -d tests ]; then \
		echo "Downloading test files..."; \
		git clone git@github.com:yannCardona/test.git tests; \
	fi

rmtests:
	@if [ -d tests ]; then \
		rm -rf tests; \
	fi

clean:
	@-rm -f $(OBJ)

fclean: clean rmtests
	@-rm -f $(NAME)

re: fclean all