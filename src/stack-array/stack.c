#include "stack.h"

#include <stdio.h>
#include <stdlib.h>

struct Stack {
    size_t size;
    size_t capacity;
    Element *elements;
};

Stack* stack_create(size_t capacity) {
    Stack* stack = malloc(sizeof(Stack));

    stack->size = 0;
    stack->capacity = capacity;
    stack->elements = malloc(capacity * sizeof(Element));

    return stack;
}

void stack_error(const char* message) {
    fprintf(stderr, "Stack error: %s\n", message);
}

void stack_destroy(Stack* stack) {
    free(stack->elements);
    free(stack);
}

bool stack_push(Stack* stack, Element value) {
    if (stack_is_full(stack)) {
        stack_error("Stack full");

        return false;
    }

    stack->elements[stack->size++] = value;

    return true;
}

Element stack_pop(Stack* stack) {
    if (stack_is_empty(stack)) {
        stack_error("Stack empty");
        return element_null();
    }

    return stack->elements[--stack->size];
}

Element stack_peek(Stack* stack) {
    if (stack_is_empty(stack)) {
        stack_error("Stack empty");
        return element_null();
    }

    return stack->elements[stack->size - 1];
}

bool stack_is_empty(Stack* stack) {
    return stack->size == 0;
}

bool stack_is_full(Stack* stack) {
    return stack->size == stack->capacity;
}

size_t stack_size(Stack* stack) {
    return stack->size;
}

void stack_print(Stack* stack) {
    for (size_t i = stack->size; i > 0; i--) {
        element_print(stack->elements[i - 1]);
        printf(" ");
    }
    printf("\n");
}