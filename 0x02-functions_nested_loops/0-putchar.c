#include "main.h"

/**
 * main - program that prints _putchar
 * @c: Print _putchar
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int main(void)
{
	char my_put[] = "_putchar";
        int i = 0;

        for (i = 0; i <= 7; i++)
	{
                _putchar(my_put[i]);
        }
        _putchar('\n');

        return (0);
}
