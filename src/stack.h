#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#include <stddef.h>

#include "element.h"

typedef struct Stack Stack;

Stack* stack_create(size_t capacity);
void stack_destroy(Stack* stack);
bool stack_push(Stack* stack, Element value);
Element stack_pop(Stack* stack);
Element stack_peek(Stack* stack);
bool stack_is_empty(Stack* stack);
bool stack_is_full(Stack* stack);
size_t stack_size(Stack* stack);
void stack_print(Stack* stack);

#endif