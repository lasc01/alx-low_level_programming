#include "main.h"

/**
 * _atoi - function that converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int length = 0, sum = 0, ax = 0, buh = 1, m = 1, i;

	while (*(s + length) != '\0')
	{
		if (sum > 0 && (*(s + length) < '0' || *(s + length) > '9'))
			break;

		if (*(s + length) == '-')
			buh *= -1;

		if ((*(s + length) >= '0') && (*(s + length) <= '9'))
		{
			if (sum > 0)
				m *= 10;
			sum++;
		}
		length++;
	}

	for (i = length - sum; i < length; i++)
	{
		ax = ax + ((*(s + i) - 48) * m);
		m /= 10;
	}
	return (ax * buh);
}
