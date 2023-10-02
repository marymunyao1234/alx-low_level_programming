#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: string
 * @src: string
 * @n: number of times
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[i] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
