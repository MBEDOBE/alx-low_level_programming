#include "main.h"

/**
 * factorial - calculating factorial of integers
 * @n: integer value being passed
 * Return: Always 0 if n is 0 or 1 else print factorial
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
