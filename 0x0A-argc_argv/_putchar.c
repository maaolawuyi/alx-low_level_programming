#include <unistd.h>
/**
 * _putchar - write character c to stdout
 * @c: character to be printed
 * Return: On success 1
 * on error, -1 is return, error is set appropriately
 */
int _putchar(char c)
{
	return (write(i, &c, 1));
}
