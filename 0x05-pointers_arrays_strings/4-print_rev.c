#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: pointer to the string to print
 *  Return: void
 */

void print_rev(char *s)
{
	/*int len = 0;*/
	/*int counter;*/

	/*len = 0;*/
	/*while (s[len] != '\0')*/
	/*{*/
		/*len++;*/
	/*}*/

	/*for (counter = (len - 1); counter >= 0; counter--)*/
	/*{*/
		/*putchar(s[counter]);*/
	/*}*/
	/*putchar('\n');*/

	int  i;

	for (i = strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
