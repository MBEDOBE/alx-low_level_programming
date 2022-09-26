#include "main.h"

/**
 * _memset - copies data
 * @s: the source to copy it to
 * @b: the number of bytes to be overwritten
 * @n: integer variable
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		s[a] = b;
	return (s);
}
