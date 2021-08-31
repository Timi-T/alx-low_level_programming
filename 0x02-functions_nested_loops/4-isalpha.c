#include "main.h"

int _isalpha(int c)
{
	char i;

	for (i = 'a' || i = 'A'; i < 'z' || i ='Z'; i++)
        {
                if (c == i)
                {
                        return (1);
		}
		else
		{
			return (0);
		}
	}
        return (0);
}

