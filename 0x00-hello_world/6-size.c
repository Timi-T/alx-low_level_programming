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
	long longtype;
	long long longlonginttype;
	float floattype;

	printf("size of char: %zu byte(s)\n", sizeof(chartype));
	printf("size of int: %zu byte(s)\n", sizeof(inttype));
	printf("size of long: %zu byte(s)\n", sizeof(longtype));
	printf("size of long long int: %zu byte(s)\n", sizeof(longlonginttype));
	printf("size of float: %zu byte(s)\n", sizeof(floattype));
	return (0);
}
