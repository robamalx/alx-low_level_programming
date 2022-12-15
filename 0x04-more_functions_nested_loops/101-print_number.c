#include "main.h"

/**
 * print_number - prnts an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	unsigned int n, d, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = n;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((n / count) % 10) + 48);
	}
}
