#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabets in lowecases 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int a;
	char b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
			_putchar(b);
		_putchar('\n');
	}
}
