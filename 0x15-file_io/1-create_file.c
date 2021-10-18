#include <sys/stat.h>
#include <fcntl.h>

#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>



/**
 * create_file - function to create a file and write to the file
 *
 * @filename: name of file to be created
 * @text_context: content of file
 *
 * Return: one or minus one;
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	}
	return (1);
}
