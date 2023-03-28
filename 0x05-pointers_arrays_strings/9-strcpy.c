#include "main.h"
/**
 *_strcpy- copies string
 *@dest: char*
 *@src: char*
 *Return: char *strcpy
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (*src != '\0')
{
	*(dest + i) = *(src);
	i++;
	src++;

}
	*(dest + i) = '\0';
	return (dest);
}
