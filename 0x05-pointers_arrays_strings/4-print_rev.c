#include "main.h"
/**
 * print_rev - prints the reverse of a string
 * @s: string
 * Return: 0
 */

void print_rev(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar('\n');
}
