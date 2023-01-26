#include "main.h"

/**
 * _print_spec - Prints a valid specifier
 * @format: The specifier to prints
 * @args: A list of variadic arguments
 * Return: The length of the specifier
 */
int _print_spec(char format, va_list args)
{
	int i = 0, length = 0;
	spc_dt _types[] = {
		{"c", _print_a_char},
		{"s", _print_a_string},
		{"d", _print_a_integer},
		{"i", _print_a_integer},
		{"b", _print_int_binary},
		{NULL, NULL}};
	while (_types[i].specifier)
	{
		if (*_types[i].specifier == format)
			length = _types[i].f(args);
		i++;
	}
	return (length);
}
