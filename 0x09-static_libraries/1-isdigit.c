#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for numbers
 * returns 1 if c is a digit
 *
 * @c:integer
 * Return: 1 if c is a digit or 0 if is an alphabet
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
