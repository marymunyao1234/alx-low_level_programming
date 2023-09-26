#include "main.h"
/**
 * _strpbrk - function locates the first occurrence in the string s
 *@s: string
 *@accept: string
 *Return:  a pointer to the byte in s that matches one of the bytes in accept
 *0 if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

	return ('\0');
}
