#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * copy_text - function to copy text from one file to another
 *
 * @file_from: file to be copied from
 * @file_to: file to copy to
 *
 * Return: nothing
 */

void copy_text(char *file_from, char *file_to)
{
	int fd1, c1, r1;
	char *buf[1024];
	char *from = file_from;
	char *to = file_to;

	if (file_from == NULL || file_to == NULL)
	{
		exit(0);
	}
	fd1 = open(file_from, O_RDWR);
	if (fd1 == -1)
	{
		print_error(98, fd1, from, to);
		exit(98);
	}
	r1 = read(fd1, buf, 1024);
	if (r1 == -1)
	{
		print_error(98, fd1, from, to);
		exit(98);
	}
	c1 = close(fd1);
	if (c1 == -1)
	{
		print_error(100, fd1, from, to);
		exit(100);
	}
	paste_text(buf, file_from, file_to, r1);
}

void paste_text(char **buf, char *src_file, char *dest_file, int r1)
{
	int fd2, w1, c2;
	char *src = src_file;
	char *dest = dest_file;

	fd2 = open(dest_file, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd2 == -1)
	{
		print_error(99, fd2, src, dest);
		exit(99);
	}
	w1 = write(fd2, buf, r1);
	if(w1 == -1)
	{
		print_error(99, fd2, src, dest);
		exit(99);
	}
	c2 = close(fd2);
	if (c2 == -1)
	{
		printf("%s\n", src_file);
		print_error(100, fd2, src, dest);
		exit(100);
	}
}

void print_error(int error_code, int fd, char *src, char *dest)
{
	char *error1;
	char *error2;
	char *error3;
	char *error4;

	error1 = "Usage: cp file_from file_to\n";
	error2 = "Error: Can't read from file ";
	error3 = "Error: Can't write to ";
	error4 = "Error: Can't close fd ";
	switch (error_code)
	{
		case(97):
			write(2, error1, strlen(error1));
			break;
		case(98):
			write(2, error2, strlen(error2));
			write(2, src, strlen(src));
			write(2, "\n", 1);
			break;
		case(99):
			write(2, error3, strlen(error3));
			write(2, dest, strlen(dest));
			write(2, "\n", 1);
			break;
		case(100):
			write(2, error4, strlen(error4));
			write(2, &fd, sizeof(fd));
			write(2, "\n", 1);
			break;
	}
}

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		print_error(97, 0, "(nil)", "(nil)");
		exit(97);
	}
	copy_text(argv[1], argv[2]);
	return (0);
}
