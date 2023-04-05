#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 * @s: character
 * Return: Always 0.
 */
int _strlen_recursion(char *s)
{
	int  len = 0;

	if (*s > len)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
