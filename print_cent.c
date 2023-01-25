#include "main.h"

/**
 * print_cent - print the percent sign after the percent sign
 * @args : list of variadic parameters
 * Return: number of characters printed.(always 1 in this place).
 *
 */

int print_cent(va_list args)
{
	int c, value;

	c = va_arg(args, int);

	if (c)
	{
		c = '%';
		value = write(1, &c, 1);
		return (value);
	}
	return (0);
}
