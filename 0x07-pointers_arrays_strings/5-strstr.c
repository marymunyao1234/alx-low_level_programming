#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @needle: sub string
 * @haystack: string
 * Return: a pointer to the beginning of the located substring
 * 0 if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *l != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
		}
		return (0);
}
