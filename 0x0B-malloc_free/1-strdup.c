#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *ptStr;
	int strLen, i;

	while (str[strLen] != '\0')
	{
		strLen++;
	}

	ptStr = malloc(sizeof(char) * strLen + 1);
	if (ptStr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		ptStr[i] = str[i];
	}
	ptStr[i] = '\0';
	return (ptStr);
}
