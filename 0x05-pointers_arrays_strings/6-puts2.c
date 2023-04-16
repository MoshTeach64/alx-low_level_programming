#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: pointer to the string to print
 * Return: void
 */

void puts2(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
		_putchar(str[i]);
	}
	putchar('\n');
}
