#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: An input character
 * Return: 1 if c is uppercase or 0 otherwiseReturn: always 0
 */
int _isupper(int c)
{
	char cold;
	
	for (cold = 'A'; cold <= 'z'; cold++)
	{
		if (cold <= 'Z')
		{
			return (1);
			break;
		}
	}
	return (0);
}
