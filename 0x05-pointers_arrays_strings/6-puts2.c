#include "main.h"
/**
 * _puts - function name
 * @str: function parameter
 */

void puts2(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
putchar (str[i]);
putchar ('\n');
}
