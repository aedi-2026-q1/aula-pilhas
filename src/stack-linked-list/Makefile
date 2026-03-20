CC = gcc -Wall -pedantic

build:
	mkdir -p build

element: build
	$(CC) -c element.c -o build/element.o

stack: element
	$(CC) -c stack.c -o build/stack.o

main: stack
	$(CC) main.c build/stack.o build/element.o -o build/main

test-stack: stack
	$(CC) test_stack.c build/stack.o build/element.o -o build/test_stack

test: test-stack
	./build/test_stack