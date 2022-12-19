#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	int i, k, tmp, len;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	len = i;
	i--;
	while (k < len / 2)
	{
		tmp = s[k];
		s[k] = s[i];
		s[i] = tmp;
		i++;
		k++;
	}
}
