#include "main.h"
/**
 * _isupper - A program that checks for uppercase character
 * @c: Variable text
 * Return: (1) on success (0) on a failure
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
