#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap the value of two integer
 * @a: int a
 * @b: int b
 */

void swap(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
