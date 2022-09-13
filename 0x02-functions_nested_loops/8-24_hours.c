#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 *
 * Return: the hour from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int a;
	int b;

	for (a = 0 ; a <= 23 ; a++)
	{
		for (b = 0 ; b <= 59 ; b++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(58);
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
		}
	}

}
