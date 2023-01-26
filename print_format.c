#include "main.h"

/**
 * _print_format - Prints a format
 * @format: The format to prints
 * @args: A list of variadic arguments
 * Return: The length of the format
 */
int _print_format(const char *format, va_list args)
{
	int count = 0;
	int i = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
				return (-1);
			i++;
			while (format[i] == ' ')
				i++;
			if (format[i] == '%')
				count += _write(format[i]);
			if (_validate_char(format[i]) == 0)
				count = _print_invalid_spec(format[i - 1], format[i], count);
			else
				count += _print_spec(format[i], args);
		}
		else
			count += _write(format[i]);
		i++;
	}
	return (count);
}
