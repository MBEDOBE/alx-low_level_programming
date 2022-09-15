#include "main.h"
#include <stdio.h>
/**
 * print_triangle - prints a triangle of size size
 *@size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
int x;
int y;
for (x = 1; x <= size; x++)
{
for (y = 1; y <= size; y++)
{
if (y <= (size - x))
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
