#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: always 0
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n = n + 1;
	}
	putchar('\n');
	return (0);
}
