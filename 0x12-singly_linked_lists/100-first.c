#include <stdio.h>
/**
 * startup - execute before main()
 *
 * Return: VOID
 */
void startup(void)__attribute__ ((constructor));
void startup(void)
{
	printf(
			"You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
