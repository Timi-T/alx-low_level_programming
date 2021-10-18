#include "main.h"
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * append_text_to_file - function to append a text to a file
 *
 * @filename: name of file to append text to
 * @text_content: what to append to file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rite;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		fd = open(filename, O_RDWR | O_APPEND);
		if (fd == -1)
		{
			return (-1);
		}
		rite = write(fd, text_content, strlen(text_content));
		if (rite == -1)
		{
			return (-1);
		}
		close(fd);
	}
	else
	{
		return (-1);
	}
	return (1);
}
