#include "main.h"
#include <stdio.h>

/**
 * main - check for upper case character
 *
 * Return: always 0
 */
int _isupper(int c)
{
	char cold;
	
	for (cold = 'A'; cold <= 'Z'; cold++)
	{
		if (cold <= 'Z')
		{
			return (1);
			break;
		}
	}
	return (0);
}
