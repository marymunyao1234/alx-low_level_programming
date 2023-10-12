#include"function_pointers.h"
#include <stdio.h>
/**
 *array_iterator - prints each array element on a new one
 *@array: array
 *@size: the size of the array
 *@action: a pointer to the function
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
