watki: main.c
	gcc -Wall -Werror -std=c99 main.c -o watki -lpthread

run: watki
	./watki
