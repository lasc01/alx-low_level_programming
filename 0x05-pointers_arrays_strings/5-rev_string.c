#include "main.h"

/**
 * rev_string - reverse string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int i, max, mid;
	char first, last;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	mid = max / 2;
	while (mid >= 0)
	{
		first = s[max - mid];
		last = s[mid];
		s[mid] = first;
		s[max - mid] = last;
		mid--;
	}
}
