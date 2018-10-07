#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "Stack.h"

void init(Stack* s)
{
	s->data = malloc(sizeof(int)*INIT_STACK_SIZE);
	s->top = 0;
	s->size = INIT_STACK_SIZE;
}

void destroy(Stack* s)
{
	free(s->data);
	s = NULL;
}

void push(Stack* s, int element)
{
	s->top++;
	if(s->top < s->size)
	{
		s->data[s->top-1] = element;
	}
	else
	{
		printf("**stack size increase**\n");
		s->size *= 2;
		s->data = realloc(s->data, sizeof(int)*(s->size));
		s->data[s->top-1] = element;
	}
}

int pop(Stack* s)
{
	if(isEmpty(s))
	{
		printf("Stack is empty!\n");
		return 0;
	}
	else
	{
		s->top--;
		return s->data[s->top];
	}
}

bool isEmpty(Stack* s)
{
	if(s->top == 0) return true;
	else return false;
}

void display(Stack* s)
{
	int i = 0;
	while(i<s->top)
	{
		printf("%d, ", s->data[i]);
		i++;
	}
	printf("\n");
}