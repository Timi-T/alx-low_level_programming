#include  <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chartype;
	int inttype;
	int longtype;
	int longlonginttype;
	float floattype;

	printf("size of char: %zu bytes\n", sizeof(chartype));
	printf("size of int: %zu bytes\n", sizeof(inttype));
	printf("size of long: %zu bytes\n", sizeof(longtype));
	printf("size of long long int: %zu bytes\n", sizeof(longlonginttype));
	printf("size of float: %zu bytes\n", sizeof(floattype));
	return (0);
}
