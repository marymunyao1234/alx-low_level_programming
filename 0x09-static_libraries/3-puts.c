#include "main.h"

/**
 * _puts - prints a string
 * @str: string
 * _putchar prints new line
 * Return: (0)
 */
void _puts(char *str)
{
	while (*str)
	_putchar(*str++);

	_putchar('\0');
}
