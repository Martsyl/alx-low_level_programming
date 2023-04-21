#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - check the code
 * @format: char
 * @...
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *st, *comma = "";
	va_list pr;

	va_start(pr, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", comma, va_arg(pr, int));
					break;
				case 'i':
					printf("%s%d", comma, va_arg(pr, int));
					break;
				case 'f':
					printf("%s%f", comma, va_arg(pr, double));
					break;
				case 's':
					st = va_arg(pr, char *);
					if (!st)
						st = "(nil)";
					printf("%s%s", comma, st);
					break;
				default:
					i++;
					continue;

			}
			comma = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(pr);
}
