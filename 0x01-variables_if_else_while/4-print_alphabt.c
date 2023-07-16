#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char letter;

	letter = 'a';
	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter = letter + 1;
	}
	putchar('\n');

	return (0);
}
