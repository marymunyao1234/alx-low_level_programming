#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 * @s: memory to be filled
 * @b: value
 * @n: number of bytes
 *
 * Return: array with a new value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
	s[a] = b;
	n--;
	}
	return (s);
}
