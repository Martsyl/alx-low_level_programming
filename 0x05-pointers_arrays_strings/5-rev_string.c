#include "main.h"

/**
 * rev_string - check the code
 *@s: char
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char re = s[0];
	int begin;
	int count = 0;

	while (s[count] != '\0')
	{
		count++;
	}
	for (begin = 0; begin < count ; begin++)
	{
		count--;
		re = s[begin];
		s[begin] = s[count];
		s[count] = re;
	}
}
