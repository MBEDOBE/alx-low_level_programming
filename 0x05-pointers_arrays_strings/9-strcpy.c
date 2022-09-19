#include "main.h"

/**
 * _strcpy - function to copy array
 * @dest : pointer to an array
 * @src : pointer to an array
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
