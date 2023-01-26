#include "main.h"

/**
 * _print_invalid_spec - Prints a invalid specifier
 * @prev_format: The previous specifier of actual specifier
 * @format: The specifier to prints
 * @count: The current count before prints invalid specifiers
 * Return: The current count after prints invalid specifiers
 */
int _print_invalid_spec(char prev_format, char format, int count)
{
	count += _write('%');
	if (prev_format == ' ')
	{
		count += _write(' ');
		count += _write(format);
	}
	else
		count += _write(format);
	return (count);
}
