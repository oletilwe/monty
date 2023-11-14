#include "monty.h"
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100
/**
* pint - prints the value at the top of the stack
* @s: input value
*/
void pint(struct Stack *s)
{
	if (top == -1)
	{
		fprintf(stderr, "L%d: cant pint, stack empty\n" ,);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", s->items[s->top]);
}
