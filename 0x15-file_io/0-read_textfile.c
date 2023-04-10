#include "main.h"
#include <fcntl.h>
/**
* read_textfile - reads a text file and prints
* @filename: name of the file to be read
* @letters: number of letters to read and print
* Return: the number of letters printed, or 0 if it failed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i, j;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (!buf)
		return (0);
	i = read(fd, buf, letters);
	if (i < 0)
	{
		free(buf);
		return (0);
	}
	buf[i] = '\0';
	close(fd);
	j = write(STDOUT_FILENO, buf, i);
	if (j < 0)
	{
		free(buf);
		return (0);
	}
	free(buf);
	return (j);
}
