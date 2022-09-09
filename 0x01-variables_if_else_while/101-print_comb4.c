#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x, y, z;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			for (z = y + 1; z < 10; z++)
			{
			putchar(a + '0');
			putchar(b + '0');
			putchar(c + '0');
			if (x != 7 || y != 8 || z != 9)
			{
				putchar(',');
				putchar(' ');
			}
			else
				putchar('\n');
			}
		}
	}
	return (0);
}
