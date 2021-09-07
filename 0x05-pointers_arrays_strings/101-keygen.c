#include <stdlib.h>
#include "main.h"
#include <time.h>

/**
 * main - Entry point
 *
 * Reurn: always 0
 */

int _putchar(char c);
int main(void)
{
	int i;
	char password[10];

	srand((unsigned int)(time(NULL)));
	for (i = 0; i < 10; i++)
	{
		password[i] = rand() % 10;
	}
	_putchar(*password);
	return (0);
}
