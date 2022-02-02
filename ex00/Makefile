NAME = brainz
SOURCES = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp
HEADERS = Zombie.hpp
OBJECTS = $(SOURCES:.cpp=.o)

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CC) -c $(CFLAGS) $<

clean:
	$(RM) $(OBJECTS)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

lint:
	cpplint $(SOURCES) $(HEADERS)

.PHONY: all clean fclean re lint
