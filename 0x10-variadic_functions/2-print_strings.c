#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -
 *  prints strings followed by a new line
 *  @n: number of strings
 *  @...: variable number of strings to print
 *  description: If separator is NULL, don’t print it
 *  If one of the string is NULL, print (nil) instead
 *  Print a new line at the end of your function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);
	if (str == NULL)
		printf("nil");
	else
		printf("%s", str);

	if (index != (n - 1) && separator != NULL)
		printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
