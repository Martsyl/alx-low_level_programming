#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char aplh;

	for (aplh = 'z'; aplh >= 'a'; aplh--)
		putchar(aplh);
	putchar('\n');
	return (0);
}
