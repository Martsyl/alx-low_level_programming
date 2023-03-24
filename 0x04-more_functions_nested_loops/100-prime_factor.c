#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n;
	long int o;

	n = 612852475143;

	for (o = 2; o <= n; o++)
	{
		if (n % o == 0)
		{
			n /= o;
			o--;
		}
	}
	printf("%ld\n", o);
	return (0);
}
