#include "main.h"

/**
 * _putchar - prints a single character on the standard output
 * @c: character input to be sent to the standard output
 *
 * Return: The output
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
