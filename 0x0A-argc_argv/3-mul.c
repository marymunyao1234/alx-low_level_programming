#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that multiplies numbers from the command lines
 * @argc: number of and lines arguments
 * @agrv: array of strings representing the command lines
 * Return: (0)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
