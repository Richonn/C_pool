##
## EPITECH PROJECT, 2022
## Base_Template
## File description:
## Makefile
##

SRC =	$(shell find -name "*.c" -type f)

OBJ =	$(SRC:.c=.o)

NAME =	my_cat

CC =	gcc

CFLAGS =	-Wall -Wextra -g3

LIBS =

all:	$(NAME)

$(NAME): $(OBJ)
	@$(CC) $(SRC) -o $(NAME) $(CFLAGS)
	@echo -e "\n\033[0;36m [Done] \033[0m \033[0;35m	\
	$(NAME)\033[0m created \033[0;32msuccessfully\033[0m"

fclean: clean
	@rm -f $(NAME)
	@echo -e "\033[0;31m [Removed] \033[0mbinary"

clean:
	@find . -type f -name '*.o' -delete
	@echo -e "\033[0;31m [Removed] \033[0munwanted files"

re: fclean
	@make all
	@echo -e "\033[0;36m [Done] \033[0mredoing"

.PHONY: all clean fclean re
