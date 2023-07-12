#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenate all arguments into one string
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, n = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Find total length of all arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++; /* Add space for each '\n' character */
	}

	/* Allocate memory for concatenated string */
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	/* Copy arguments into concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[n] = av[i][j];
			n++;
		}
		str[n] = '\n';
		n++;
	}
	str[n] = '\0';

	return (str);
}

