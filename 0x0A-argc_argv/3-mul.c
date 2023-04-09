#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: number of args
 * @argv: array of args
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);

        return (0);
}
