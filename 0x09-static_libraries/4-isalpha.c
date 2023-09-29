#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character
 * Return: 910 if c is a letter and (0) if not
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
