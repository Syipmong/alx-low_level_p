#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements in array
 *@a: array
 *@n: nth element
 *Return: always 0
 */
void print_array(int *a, int n)
{
int x;

for (x = 0; x < n; x++)
{
	if (x != 0)
	printf(", %d", *(a + x));
else
	printf("%d", *(a + x));
}
printf("\n");

}
