#include "main.h"

/**
 * main - check the code.
 * 
 * Return: Always 0.
 */
int print_last_digit(int a)
{
	int b = a % 10;

	if (a < 0)
		b = b * -1;
	_putchar(b + '0');
	return (b);
}
