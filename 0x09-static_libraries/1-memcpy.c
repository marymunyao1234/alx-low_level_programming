#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory area
 * @src: memory area
 * @n: number of times
 *
 * Return: copied memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int i = n;

	for (; p < i; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
