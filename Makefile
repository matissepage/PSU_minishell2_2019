##
## EPITECH PROJECT, 2019
## PSU_my_printf_bootstrap_2019
## File description:
## Makefile
##

SRC		=	src/main.c 						\
			src/arbre/create_tree.c			\
			src/arbre/add_element.c			\
			src/arbre/print_tree.c			\
			src/exec/exec.c					\
			src/exec/get.c					\
			src/exec/list.c					\
			src/exec/parser.c				\


OBJ		= $(SRC:.c=.o)

CC 		= gcc

LIB		= make -C ./lib/my

RM		= rm -f

NAME	= my_sh

CFLAGS	= -g3

all: 		$(NAME)

$(NAME):
		$(LIB)
		$(CC) -o $(NAME) $(SRC) $(CFLAGS) ./lib/libmy.a
		@echo "\033[5m\033[1m\033[32m>$(NAME) DONE\033[0m"

tests_run:
		$(LIB)
		gcc -o units tests/tests_add_element.c ./src/*.c §(CFLAGS) ./lib/libmy.a
		@echo "\033[5m\033[1m\033[32m>Compiling tests with succes\033[0m"
		@echo "\033[5m\033[1m\033[32m>Running ./units DONE\033[0m"
		./units

clean:
		$(LIB) clean
		$(RM) $(OBJ)
		$(RM) *.gcda
		$(RM) *.gcno

fclean: clean
		$(RM) $(NAME)
		$(RM) units
		$(LIB) fclean

re:		fclean all