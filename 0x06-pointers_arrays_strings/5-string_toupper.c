#include "main.h"

/**
  *string_toupper - convert lowercase to uppercase
  *@t : char
  *Return: char *s upper
  */
char *string_toupper(char *t)
{
char *s = t;
char check;

while (*s)
{
	for (check = 'a'; check <= 'z'; check++)
	{
		if (*s == check)
			*s = *s - 32;
	}

	s++;
}

return (t);

}
