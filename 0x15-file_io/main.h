#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <sys/types.h>

ssize_t read_textfile(const char *filename, size_t letters);
int _putchar(char c);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_text(char *file_from, char *file_to);
void print_error(int error_code, int fd, char *src, char *dest);
void paste_text(char **buf, char *src_file, char *dest_file, int r1);

#endif
