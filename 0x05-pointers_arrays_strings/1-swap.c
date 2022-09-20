#include "main.h"

/**
 * 1-swap.c - swap the value of two integers
 * @a: int 1
 * @b: int 2
 * Return: void
 */
void swap_int(int *a, int *b);
{
	int mrd;

	mrd = *a;
	*a = *b;
	*b = mrd;
}

