#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is ", n);
	num = n % 10;

	if (n > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", num);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", num);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", num);
	}
	return (0);
}
