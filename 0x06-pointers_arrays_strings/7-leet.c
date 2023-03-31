#include "main.h"
/**
  *leet - encodes string into 1377
  *@s:char
  *Return: char*
  */

char *leet(char *s)
{
char *t = s;
char *low = "aeotl";
char *up = "AEOTL";
char *num = "43071";
int x;

while (*t)
{
	for (x = 0; x < 5; x++)
	{
		if (*t == *(low + x) || *t == *(up + x))
			*t = *(num + x);
	}

	t++;
}

return (s);
}
