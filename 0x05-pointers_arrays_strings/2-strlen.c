#include "main.h"

/**
 * _strlen - function that returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (length);
}
