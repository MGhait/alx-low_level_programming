#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of program
 * @argc: number of arguments
 * @argv: array of args
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);

	return (0);
}
