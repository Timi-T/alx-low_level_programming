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
	size_t size2;
	char *buf;
	int fd, rite;

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
	if (size <= 0)
	{
		return (0);
	}
	size2 = (size_t) size;
	rite = write(1, buf, size2);
	if (rite == -1 || rite != (int) size2)
	{
		return (0);
	}
	close(fd);
	return (rite);
}
