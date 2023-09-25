#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @n: number of times to copy src
 * @dest: memory area
 * @src: memory area
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
