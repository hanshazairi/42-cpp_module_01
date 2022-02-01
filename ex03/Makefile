NAME = Unnecessary_violence
SOURCES = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp
HEADERS = Weapon.hpp HumanA.hpp HumanB.hpp
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
