#include <unistd.h>

/**
 * _putchar - van twillwrites the character c to stdout 
 * @c: The character to print fill
 *
 * Return: On success 1.great
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
