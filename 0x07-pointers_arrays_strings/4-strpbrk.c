#include "main.h"

/**
 * _strchr - function
 * @s: base string4
 * @c: substring
 *
 * Return: char value
 */

int i;
    int j;
    int a;
    int b;
    int x;
    char s[] = "hello, world";
    char c[] = "world";
    char *p;
    p = s;

    for (i = 0; s[i] != '\0'; i++)
    {
    }
    for (j = 0; s[j] != '\0'; j++)
    {
    }
    for (a = 0; a < i && s[a] != '\0'; a++)
    {
        for (b = 0; b < j && s[b] != '\0'; b++)
        {
            if (c[a] == s[b])
            {
                for (x = 0; b < i && s[b] != '\0'; b++, x++)
                {
                    p[x] = s[b];
                }
                p[x] = '\0';
            }
        }
    }
    printf("%s\n", p);
    return (0);

