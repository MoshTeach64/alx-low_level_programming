#include "main.h"

/**
 * print_line - prints a straight line
 * @n: parameter
 * Return:returns nothing
 */

void print_line(int n)
{
	int i;
	/*while (n-- > 0)*/
	if (n <= 0)
	{
		_putchar('\n');

		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
