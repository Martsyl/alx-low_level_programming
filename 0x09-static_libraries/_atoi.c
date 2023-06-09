#include "main.h"

/**
 * _atoi - check the code
 * @s: string
 * Return: Always string
 */
int _atoi(char *s)
{
	int sgn = 1;
	int i = 0;
	unsigned int result = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '_')
			sgn *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	result *= sgn;
	return (result);
}
