#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int e, s;

	for (s = 0; s < 10; s++)
	{
		for (e = s + 1; e < 10; e++)
		{
			putchar(s + '0');
			putchar(e + '0');
			if (s != 8 || e != 9)
			{
			putchar(',');
			putchar(' ');
			}
			else
				putchar('\n');
		}
	}
	return (0);
}
