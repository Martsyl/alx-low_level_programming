#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowertoUpper;

	for (lowertoUpper = 'a'; lowertoUpper <= 'z'; lowertoUpper++)
		putchar(lowertoUpper);
	for (lowertoUpper = 'A'; lowertoUpper <= 'Z'; lowertoUpper++)
		putchar(lowertoUpper);
	putchar('\n');
	return (0);
}
