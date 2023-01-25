#ifndef __COMMON_H__
#define __COMMON_H__
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
int _printf(const char *format, ...);
int print_char(va_list);
int print_str(va_list);
int print_cent(va_list);

/**
 * struct format_specifier - ...
 * @c : ...
 * @f : ...
 */
typedef struct format_specifier
{
	char *c;
	int (*f)(va_list);
} fmt;

#endif
