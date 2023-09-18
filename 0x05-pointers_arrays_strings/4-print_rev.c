#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 *@s: function parameter
 * Return: 0 (Success)
 */

void print_rev(char *s)
{
int i;
int count = 0;
for (i = 0; s[i] != '\0'; i++)
	count++;

for (i = count - 1; i >= 0; i--)
putchar(s[i]);
putchar('\n');
}
