#include <stdio.h>

/*
 * main - Entry point 
 * void - empty
 * Return: Always 0 (Success)
 */
int main(void)
{
	char v;

	for (v = 'a'; v <= 'z'; v++)
	{
		if (v != 'q' && v != 'e')
		{
			putchar(v);
		}
	}
	putchar('\n');
	return (0);
}
