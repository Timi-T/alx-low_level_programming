#include "main.h"

/**
 * string_toupper - function to convert lowercase strings to upper case
 *
 * @c: string to be operated on
 * Return: char value
 */

char *cap_string(char *c)
{
	int i;
	int j;
	char *p;

	p = c;
	for (i = 0; c[i] != '0'; i++)
	{
	}
	for (j = 0; (j < i && c[j] != '\n'); j++)
	{
		if ((c[0] >= 97) && (c[0] <=122))
		{
			p[0] = c[0] - 32;
			c[0] = p[0];
		}
		if (c[j] == 32 && (c[j - 1] == 46 || c[j - 1] == 33 || c[j - 1] == 63))
		{
			if ((c[j + 1] >= 97) && (c[j + 1] <=122))
			{
				p[j + 1] = c[j + 1] - 32;
				c[j + 1] = p[j + 1];
			}
		}
		if (c[j] == '\n')
		{
			if ((c[j + 1] >= 97) && (c[j + 1] <=122))
			{
				p[j + 1] = c[j + 1] - 32;
				c[j + 1] = p[j + 1];
			}
		}
	}
	return (c);
}
/*







	if ((c[j] >= 97) && (c[j] <=122))
		{
			p[j] = c[j] - 32;
			c[j] = p[j];
		}
	}
	return (c);
}*/
