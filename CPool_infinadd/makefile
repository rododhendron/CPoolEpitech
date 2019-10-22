CC=gcc
EXEC=infin_add
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
HEAD=header

all:	$(EXEC)

$(EXEC):
	gcc -Wall $(SRC) -o $(EXEC) -I./include -L./lib -lmy -g

.PHONY : clean fclean re

fclean:
	rm $(EXEC)

re:	fclean  all
