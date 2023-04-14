#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 *
 * @s1: pointer.
 * @s2: pointer.
 * @n: int.
 *
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len_s1 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len_s1 = 0; s1[len_s1] != '\0'; ++len_s1)
		;

	ptr = malloc(len_s1 + n + 1);

	if (ptr == NULL)
		return (NULL);


	for (i = 0; s1[i] != '\0'; ++i)
		ptr[i] = s1[i];

	for (i = 0; i < n && s2[i] != '\0'; ++i)
	{
		ptr[len_s1 + i] = s2[i];
	}
	ptr[len_s1 + i] = '\0';
	return (ptr);
}
