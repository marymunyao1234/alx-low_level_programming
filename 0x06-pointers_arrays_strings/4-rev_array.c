#include "main.h"
/**
 * reverse_array - a function that reverses an array of integers.
 * @a: array
 * @n: number of elements
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] - temp;
		n--;
	}
}
