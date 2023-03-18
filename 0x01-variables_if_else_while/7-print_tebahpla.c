#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char aplh;

	for (aplh = 'a'; aplh >= 'z'; aplh--)
		putchar(aplh);
	putchar('\n');
	return (0);
}
