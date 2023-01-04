#include <unistd.h>
/**
 * _putchar - write the charcter to c stdout
 * @c: character to print
 * Return: On success, 1
 */

int _putchar(char c)
{
	return (write (1, &c, 1));
}
