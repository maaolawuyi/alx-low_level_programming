#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **ptArr;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);

	ptArr = (int **) malloc(sizeof(int *) * height);

	if (ptArr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptArr[i] = (int *) malloc(sizeof(int) * width);
		if (ptArr[i] == NULL)
		{
			free(ptArr);
			for (j = 0; j <= i; j++)
				free(ptArr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptArr[i][j] = 0;
		}
	}
	return (ptArr);
}
