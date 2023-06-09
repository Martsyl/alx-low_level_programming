#include "main.h"
#include <stdio.h>

/**
 *_isupper - shows 1 if the input is a lowercase character
 *Another cases shows 0
 *@c: intger
 *if c>=1 retun 1
 *or retun 0
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}

