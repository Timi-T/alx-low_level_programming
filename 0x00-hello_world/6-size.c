#include  <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char chartype;
	int intype;
	int longtype;
	int longlonginttype;
	float floattype;

	printf("size of char: ", sizeof(chartype));
	printf("size of int: ", sizeof(inttype));
	printf("size of long: ", sizeof(longtype));
	printf("size of long long int: ", sizeof(longlonginttype));
	printf("size of float: ", sizeof(floattype));
	return (0);
}
