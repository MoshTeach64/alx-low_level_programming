#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int num;
	int digit;

	int fib[50];

	fib[0] = 1;
	fib[1] = 1;
	putchar('1');
	putchar(',');
	putchar(' ');
	putchar('1');
	putchar(',');
	putchar(' ');
	for (i = 2; i < 50; i++)
	{
	fib[i] = fib[i - 1] + fib[i - 2];
		num = fib[i];
	digit = 1;

	while (num > 0)
	{
		digit *= 10;
		num /= 10;
	}
		digit /= 10;
	while (digit > 0)
	{
		putchar(num / digit + '0');
		num %= digit;
		digit /= 10;
	}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
