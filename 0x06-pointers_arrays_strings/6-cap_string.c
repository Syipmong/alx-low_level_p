#include "main.h"
/**
 *cap_string- capitalize first lowercase letter after seperator
 *@s:char
 *Return: char
 */

char *cap_string(char *s)
{
	char *t = s;
	char *check = ",;.!?\"(){} \t\n";
	int x;

	if (*t >= 'a' && *t <= 'z')
		*t = *t - 32;

	while (*t)
	{

		for (x = 0; check[x] != '\0'; x++)
		{
			if (*t == check[x] && *(t + 1) >= 'a' && *(t + 1) <= 'z')
			{
				t++;
				*t = *t - 32;
				break;
			}
		}

	t++;
	}
	return (s);
}
