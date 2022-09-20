#include <unistd.h>

/**
 * putchar - writes char c to stdout
 * @c: the char to print 
 *
 * Return: on success 1
 * on error, -1 is returned, errno is set appropriately
 */
int _putchar(char)
{
	return (write(1, &c, 1));
}