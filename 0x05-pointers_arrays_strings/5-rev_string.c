#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: a pointer to than an int changed
 *
 * Return: void
 */
void rev_string(char *s)
{
	char (*start_c);
	char (*end_c);
	char (c);

	int i;
	int count;
	int length = 0;

	for (i = 0; s[i]; i++)
	{
		length++;
	}

	count = length;
	start_c = s;
	end_c = s;
	for (i = 0, i < count - 1; i++;)
	{
		end_c++;
	}
	for (i = 0; i < count / 2; i++)
	{
		c = *end_c;
		*end_c = *start_c;
		*start_c = c;

		start_c++;
		end_c--;
	}
}
