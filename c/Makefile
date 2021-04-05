area: area.o mylib.o
	gcc area.o mylib.o -o area

area.o : area.c
	gcc -c area.c

mylib.o : mylib.c
	gcc -c mylib.c

clean:
	rm *.o area
