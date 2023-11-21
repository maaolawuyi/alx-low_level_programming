#include "main.h"
#include <stdlib.h>
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
	char *ptStr;
	int count, i, j, k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, count = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; count++)
		{}
		count++;
	}
	count++;

	ptStr = malloc(sizeof(char) * count + 1);
	if (ptStr == NULL)
		return (NULL);

	for (i = 0, k = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptStr[k] = av[i][j];
			k++;
		}
	}
	ptStr[k] = '\0';
	return (ptStr);

}
