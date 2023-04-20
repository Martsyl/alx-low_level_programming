#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - check the code
 * @separator: char
 * @... var
 * @n: int
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strng;
	char *str;
	unsigned int i;

	va_start(strng, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strng, char *);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(strng);
}
