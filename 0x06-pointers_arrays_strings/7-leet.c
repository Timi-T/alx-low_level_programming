#include "main.h"

/**
 * leet - function to convert some letters to integers
 *
 * @c: string to work on
 *
 * Return: char c
 */

char *leet(char *c)
{
	int i;
	int a = 97;
	int A = 65;
	int e = 101;
	int E = 69;
	int O = 79;
	int o = 111;
	int T = 84;
	int t = 116;
	int l = 108;
	int L = 76;
	char *p;

	p = c;
	for (i = 0; c[i] != 0; i++)
	{
	}
	for (j = 0; j < i; j++)
	{
		while ((c[j] >= 97 || c[j] >= 122) && (c[j] <= 65 || c[j] <= 90))
		{
			a = 52;
			A = 52;
			E = 51;
			e = 51;
			o = 48;
			O = 48;
			t = 55;
			T = 55;
			l = 49;
			L = 49;
		}
	}
	return (c);
}





	/*for (j = 'a'; j < i; j++)
		if (c[i] == 65 || c[i] == 97)
		{
			p[i] = 52;
			c[i] = p[i];
		}
		else if (c[i] == 69 || c[i] == 101)
		{
			p[i] = 51;
			c[i] = p[i];
		}
		else if (c[i] == 79 || c[i] == 111)
		{
			p[i] = 48;
			c[i] = p[i];
		}
		else if (c[i] == 84 || c[i] == 116)
		{
			p[i] = 55;
			c[i] = p[i];
		}
		else if (c[i] == 76 || c[i] == 108)
		{
			p[i] = 49;
			c[i] = p[i];
		}
	}
	return (c);
}*/
