#include "main.h"

/**
 * _strcpy - check the code
 *@dest: destiny
 *@src: source
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int pn;

	while (*(src + pn) != '\0')
	{
		*(dest + pn) = *(src + pn);
		pn++;
	}
	*(dest + pn) = '\0';
	return (dest);
}