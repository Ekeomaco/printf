#include "main.h"
/**
 * _validate_char - validate the type
 * @_type: character to be comparate
 * Return: 1 if char is equal to a type
 */
int _validate_char(char _type)
{
	char _types[] = {'c', 's', 'd', 'i', 'b', '%'};
	int i = 0;

	while (_types[i])
	{
		if (_types[i] == _type)
			return (1);
		i++;
	}
	return (0);
}
