#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char s[] = "_putchar";
	int a;

	a = 0;

	while (a <= 7)
	{
		_putchar(s[a]);
		a++;
	}
	_putchar('\n');
	return (0);
}
