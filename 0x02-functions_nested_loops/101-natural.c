#include <stdio.h>
/**
 * main - List all natural number below 1024 (excluded)
 * that are multiple of 3 and 5
 * Return: Always 0
 */

int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (1 % 5) == 0)
			sum += 1;
	}
	printf("%d\n", sum);

	return (0);
}
