#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: pointer to the string to print
 * Return: void
 */

void puts_half(char *str)
{
	int len;
	int counter;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	counter = (len + 1) / 2;
	while (str[counter])
	{
	putchar(str[counter]);
	counter++;
	}
	putchar('\n');
}
