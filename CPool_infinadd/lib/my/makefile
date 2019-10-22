CC=gcc
LIB=lib
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
HEAD=header

all:	 $(HEAD) $(LIB) clean

$(LIB):
	gcc -Wall -c $(SRC)
	ar -cr libmy.a $(OBJ)
	cp libmy.a ../libmy.a
	ranlib ../libmy.a

$(HEAD):
	./make_header.sh $(SRC)
	cp my.h ../../include/my.h

.PHONY : clean fclean re

clean:
	rm $(OBJ)

fclean:
	rm ../libmy.a
	rm libmy.a
	rm ../../include/my.h

re:	fclean  all