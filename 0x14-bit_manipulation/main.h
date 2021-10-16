#ifndef MAIN_H
#define MAIN_H

unsigned int binary_to_uint(const char *b);
unsigned int get_pow(int max_pow_two);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);
int _pow(int base, unsigned int power);

#endif /*_HEADER_*/
