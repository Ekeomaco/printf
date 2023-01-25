#include "main.h"

/**
 * print_cent - Takes care of the printing of character parameters
 * @args : list of variadic parameters
 * Return: number of characters printed.(always 1 in this place).
 *
 */

int print_char(va_list args)
{
	int c, value;

	c = va_arg(args, int);

	if (c)
	{
		value = write(1, &c, 1);
		return (value);
	}
	return (0);
}
