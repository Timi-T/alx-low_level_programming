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

	printf("size of char: \n", sizeof(chartype));
	printf("size of int: \n", sizeof(inttype));
	printf("size of long: \n", sizeof(longtype));
	printf("size of long long int: \n", sizeof(longlonginttype));
	printf("size of float: \n", sizeof(floattype));
	return (0);
}
