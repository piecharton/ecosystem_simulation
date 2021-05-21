SHELL =	/bin/sh
.SUFFIXES:
.SUFFIXES: .c .o

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = ecosystem_sim
INCLUDES = -I ./includes
SRCS =	one.o \
		map.o \
		lst_animal.o

.PHONY: clean fclean re

$(NAME): $(SRCS)

all: $(NAME)
	$(CC) $(CFLAGS) $(INCLUDES) $(SRCS) -o $<
clean:
	rm -rf $(SRCS)

fclean: clean
	rm -rf $(NAME)

re: fclean all