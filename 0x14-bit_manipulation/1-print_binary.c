#include "main.h"
#include <stdio.h>

/**
 * print_binary - print binary representation of a number
 * @n: number to print as binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int tp;
	int sft;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tp = n, sft = 0; (tp >>= 1) > 0; sft++)
		;

	for (; sft >= 0; sft--)
	{
		if ((n >> sft) & 1)
			printf("1");
		else
			printf("0");
	}
}
