#include "main.h"

/**
 *_ strlen - a function name
 * @s: function parameter
 * Return: length
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

		for (i = 0; s[i] != '\0'; i++)
			count++;
	return (count);
}
