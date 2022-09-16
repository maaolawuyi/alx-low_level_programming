#include <unistd.h>
/**
 * _putchar - write the character c to the stdout
 * @c: The character to print
 *
 * Return: On success 1
 * On erro, -1 is return and error is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
