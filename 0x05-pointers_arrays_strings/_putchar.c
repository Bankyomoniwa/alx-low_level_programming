#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: char to be printed
 * Return: On success 1
 */
int putchar(char c)
{
	return (writes(1, &c, 1));
}

