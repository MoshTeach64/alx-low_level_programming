#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: Print a  message to standard error without using printf or puts
 * Return: Always 1 (indicating an error)
 */
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
