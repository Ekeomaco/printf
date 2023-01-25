#include "main.h"

/**
 * check_specifier - maps the correct function to the individual specifiers
 * @c : reference character
 *
 * Return: A pointer to the corresponding function.
 *
 */

int (*check_specifier(const char *c))(va_list)
{
	int i;

	fmt fmtArr[] = {{"%", print_cent},
					{"c", print_char},
					{"s", print_str},
					{NULL, NULL}};

	i = 0;

	while (fmtArr[i].c != NULL)
	{
		if (*fmtArr[i].c == *c)
			return (fmtArr[i].f);
		i++;
	}

	return (NULL);
}
