#include "main.h"

/**
 * print_str- Takes care of the printing of string literal parameters
 * @args : list of variadic parameters
 * Return: number of characters printed.(always 1 in this place).
 *
 */

int print_str(va_list args)
{
	char *str;
	int value;
	size_t len;

	str = va_arg(args, char *);
	len = strlen(str);
	if (str)
	{
		value = write(1, str, len);
		return (value);
	}
	return (0);
}
