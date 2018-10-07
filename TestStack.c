#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "Stack.h"

#define INIT_STACK_SIZE 5

int main(int argc, char const *argv[])
{
	Stack stack;
	init(&stack);

	push(&stack, 23);
	display(&stack);

	push(&stack, 4);
	display(&stack);

	printf("popped: %d\n", pop(&stack));
	display(&stack);

	for(int i = 0; i < 13; i++)
	{
		push(&stack, 100 + i);
		display(&stack);
	}

	printf("popped: %d\n", pop(&stack));
	display(&stack);

	destroy(&stack);
	return 0;
}