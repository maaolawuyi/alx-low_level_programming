#include <unistd.h>
/**
 *_putchar - write the character c to the stdout
 *@c: the character to be outputed
 *
 *Return: On success 1
 *On error, -1, is return and error is set appropriately.
 */
int put _putchar(char c)
{
  return (write(1, %c, 1));
}
