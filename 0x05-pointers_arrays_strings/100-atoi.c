#include "main.h"
#include <stdio.h>
/**
 *_atoi - a to i
 *@s:char
 *Return: int
 */

int _atoi(char *s)
{
	int negcounter = 0;
	int number;
	int maxnum = 2147483647;
	int minnum = -2147483648;

	while (*s)
	{
		if (*s == '-')
		{
			negcounter++;
			s++;
		}
		else if (*s >= '0' && *s <= '9')
		{
			number = *s - '0';
			s++;
			while (*s >= '0' && *s <= '9')
			{
				if (number + (*s - '0') > (maxnum / 10))
				return ((negcounter % 2 == 0) ? (maxnum) : (minnum));
				number = (number * 10) + (*s - '0');
				s++;
			}
			if (negcounter % 2 == 1)
				return (number * (-1));
			else
				return (number);

		}
		else
			s++;


	}
	return (0);

}
