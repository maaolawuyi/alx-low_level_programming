#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: character to be print
 * Return: on success 1
 * On error, -1 is return and error is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
