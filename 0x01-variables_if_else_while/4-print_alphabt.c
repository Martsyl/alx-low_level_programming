#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char avoidEQ;

	for (avoidEQ = 'a'; avoidEQ <= 'z'; avoidEQ++)
	{
		if (avoidEQ != 'e' && avoidEQ != 'q')
			putchar(avoidEQ);
	}
	putchar('\n');
	return (0);
}
