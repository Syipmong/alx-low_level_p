#ifndef VARIADIC
#define VARIADIC

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif


#ifndef PRINT
#define PRINT

#include <stdarg.h>
/**
 * struct print_function - mapping format with function
 *
 * @format: char * input
 * @function: a pointer to function
 *
 */
typedef struct print_function
{
	char *format;
	void (*function)(va_list args);
} print_function;

#endif
