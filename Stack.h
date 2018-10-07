#ifndef STACK_H
#define STACK_H

#include <stdbool.h>
#define INIT_STACK_SIZE 5

typedef struct {
	int top;
	int *data;
	int size;
} Stack;

void init(Stack* s);
void destroy(Stack* s);
void push(Stack* s, int element);
int pop(Stack* s);
bool isEmpty(Stack* s);
void display(Stack* s);

#endif