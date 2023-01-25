#include "main.h"

/**
 * _printf - A replica of the original printf() in C
 * @format : String that gives us a skeleton of what to print;
 * @...: variadic params
 * Return: num of characters printed.
 */

int _printf(const char *format, ...)
{
	int i = 0, count = 0, value = 0;

	int (*f)(va_list);

	va_list args;

	va_start(args, format);

	if (format == NULL)
		return (-1);

	while (format[i])
	{
		if (format[i] != '%')
			value = write(1, &format[i], 1);

		else
		{
			f = check_specifier(&format[i + 1]);
			if (f != NULL)
			{
				value = f(args);
				i += 2;
			}
			if (format[i + 1] == '\0')
				break;

			if (format[i + 1] != '\0')
				value = write(1, &format[i], 1);
		}
		count += value;
		i++;
	}

	return (count);
}
