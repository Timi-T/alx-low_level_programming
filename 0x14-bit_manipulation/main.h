#ifndef MAIN_H
#define MAIN_H

typedef struct list_bin
{
	int n;
	struct list_bin *next;
} list_bin;

int _putchar(char c);
unsigned int binary_to_uint(const char *b);
unsigned int get_pow(int max_pow_two);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _pow(int base, unsigned int power);
list_bin *get_binary(unsigned long int n);

#endif
