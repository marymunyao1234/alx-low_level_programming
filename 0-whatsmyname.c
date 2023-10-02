#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 * @argc: the number of command lines arguments
 * @argv: array of strings containing command lines arguments
 * Return: (0) on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{

	printf("%s\n", argc[0]);
	return (0);
}
