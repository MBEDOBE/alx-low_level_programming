#include <stdio.h>

/*
 * main - Entry point 
 * void - empty
 * Return: Always 0 (Success)
 */
int main(void)
{
	lowerCase a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a != 'q' && a != 'e')
		{
			putchar(a);
		}
	}
	putchar('\n');
	return (0);
}
