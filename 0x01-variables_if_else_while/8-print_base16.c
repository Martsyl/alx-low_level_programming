#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numhex;
	char hexaf;

	for (numhex = 0; numhex < 10; numhex++)
		putchar ((numhex % 10) + '0');
	for (hexaf = 'a'; hexaf <= 'f'; hexaf++)
		putchar(hexaf);
	putchar('\n');
	return (0);
}
