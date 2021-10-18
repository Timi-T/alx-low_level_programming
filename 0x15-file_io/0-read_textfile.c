#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile - function to read a text file
 *
 * @filename: name of file to read text from
 * @letters: size of letters to be read from file
 *
 * Return: number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t size;
	char *buf;
	int fd;
	int rite;
	int let = (int) letters;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDWR);
	if (fd == -1)
	{
		return (0);
	}
	buf  = malloc(letters);
	size = read(fd, buf, letters);
	if (size == -1)
	{
		return (0);
	}
	rite = write(1, buf, letters);
	if (rite == -1 || rite != let)
	{
		return (0);
	}
	close(fd);
	return (size);
}
