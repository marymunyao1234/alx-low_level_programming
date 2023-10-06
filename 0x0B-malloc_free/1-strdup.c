#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that duplicates string
 * which contains a copy of the string given as a parameter.
 * @str: string to be copied
 *
 * return: a pointer to a new string which is a duplicate of the string
 * NULL if insufficient memory
 */
char *_strdup(char *str)
{
	int a = 0, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
