#include "main.h"
/**
  *rot13 - encodes a string using rot13
  *@s:char
  *Return: char*
  */

char *rot13(char *s)
{

char *t = s;
char *in = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *out = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int x;

while (*t)
{
	for (x = 0; *(in + x) != '\0' ; x++)
	{
		if (*t == *(in + x))
		{
			*t = *(out + x);
			break;

		}

	}
	t++;
}

return (s);
}
