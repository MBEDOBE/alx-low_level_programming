#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - printing the sum of two diagonals
 * @a: array values
 * @size: size of the matrix
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int b, c;
	int diag1 = 0, diag2 = 0;

	for (b = 0; b < size * size;  b = b + (size + 1))
	{
		diag1 += a[b];
	}
	for (c = size - 1; c < size * size - 1; c = c + (size - 1))
	{
		diag2 += a[c];
	}
	printf("%d, ", diag1);
	printf("%d\n", diag2);
}
