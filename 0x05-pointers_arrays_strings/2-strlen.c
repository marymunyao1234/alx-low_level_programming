#include "main.h"

/**
 * int _strlen - a function that returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\n')
	{
		longi++;
		s++;
	}
	return (longi);
}
