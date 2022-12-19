#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: input
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i;
	int j;
	int temp;
	int length;
	while (s[i] != 0)
	{
		i++;
	}
	length = i;
	i = 0;
	j = length;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j++;
	}
}
