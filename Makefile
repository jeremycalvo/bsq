##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Evalexpr Makefile
##

SRC	=	src/main.c	\
		src/check_file.c	\
		src/draft.c

LIB	=	lib/my/*.c

NAME	=	bsq

LNAME	=	libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
		cd lib/my/ && gcc -c *.c && ar rc $(LNAME) *.o
		cp lib/my/$(LNAME) lib/
		cp lib/my/my.h include/
		gcc -g3 $(SRC) -o $(NAME) -Llib/ -lmy -Iinclude/
		cd lib/my/ && rm -f *.o
		$(clean)

clean:
		cd lib/my/ && rm -f *.o
		rm -f *~
		rm -f *#
		cd lib/my/ && rm -f *~

fclean: clean
		rm -f $(NAME)
		rm -f include/my.h
		rm -f lib/$(LNAME)
		rm -f lib/my/$(LNAME)
		rm -f vg*

re: fclean all
