##
## EPITECH PROJECT, 2022
## B-CPE-100-LYN-1-1-cpoolday10-leandre.cacarie
## File description:
## Makefile
##

SRC	=	$(shell find -name "*.c" -type f)

OBJ	=	$(SRC:.c=.o)

NAME 	=	libmy.a

all:	$(NAME)

$(NAME): $(OBJ)
	@ar rc 	$(NAME) $(OBJ)
	@cp $(NAME) ../
	@cp my.h ../../include
	@echo -e "\n\033[0;36m [Done] \033[0m \033[0;35m\
	$(NAME)\033[0m created \033[0;32msuccessfully\033[0m"

clean:
	@find . -type f -name '*.o' -delete
	@echo -e "\033[0;31m [Removed] \033[0munwanted files"

fclean: clean
	@rm -f $(NAME)
	@echo -e "\033[0;31m [Removed] \033[0mbinary"

re:	fclean all

.PHONY	: clean all fclean re
