#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: the number of arguments passed into the program
* @argv: an array of the arguments passed
* Return: Always '0'(success)
*/
int main(int argc, char *argv[])
{
	int cents;
	int num_coins;

	if (argc != 2)
	{
	printf("Error\n");
	return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
	printf("0\n");
	return (0);
	}

	num_coins = 0;

	num_coins += cents / 25; /*number of quarters*/
	cents %= 25;

	num_coins += cents / 10; /*number of dimes*/
	cents %= 10;

	num_coins += cents / 5; /*number of nickels*/
	cents %= 5;

	num_coins += cents / 2; /*number of twopence*/
	cents %= 2;

	num_coins += cents; /*number of pennies*/

	printf("%d\n", num_coins);

	return (0);
}
