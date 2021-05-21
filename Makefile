SHELL =	/bin/sh
.SUFFIXES:
.SUFFIXES: .c .o

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ecosystem_sim
INCLUDES = -I ./includes
SRCS =	main.o \
		map.o \
		animal.o

.PHONY: clean fclean re

$(NAME): $(SRCS)

all: $(NAME)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRCS) -o $<
clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME)

re: fclean all