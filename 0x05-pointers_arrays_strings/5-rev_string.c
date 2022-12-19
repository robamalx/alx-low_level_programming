#include "main.h"

/**
 * main - prints a string in reverse
 * @s: input
 * Return: Always 0
 */
int main(void)
{
	int s;

	char s[10] = "My School";

	printf("s: %s\n", s);
	rev_string(s);
	printf("s: %s\n", s);
	return (0);
}
