#include "monty.h"
#include <stdio.h>

#define Limit 100
/**
* push - pushes an element to the stack.
* @element: output value
* @stack: input value
* @top: input value
*/
void push(int stack[], int *top, int element)
{
	if (*top == Limit - 1)
	{
		printf("stack overflow\n");
		exit(EXIT_FAILURE);
	}
	else
	{
		(*top)++;
		stack[*top] = element;
	}
}
/**
* pall - prints all the values on the stack, starting from the top
* @stack: input value
* @top: input value
*/
void pall(int stack[], int top)
{
	if (top == -1)
	{
		return;
	}
	printf("stack values: ");
	int i;
	for (i = top; i >= 0; i--)
	{
		printf("%d ", stack[i]);
	}
	printf("\n");
}
