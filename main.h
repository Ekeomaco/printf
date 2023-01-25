#ifndef __COMMON_H__
#define __COMMON_H__
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int (*check_specifier(const char *))(va_list);

/**
 * struct format_specifier - Hold the specifier and it s corresponding function
 * @c : char specifier
 * @f : corresponding function
 *
 */
typedef struct format_specifier
{
	char *c;
	int (*f)(va_list);
} fmt;

int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);
#endif
