#include "holberton.h"

/**
 * op_hex_lower - converts uint to hex string, lowercase
 * @n: int
 *
 * Return: new string
 */

char *op_hex_lower(unsigned int n)
{
	char *str;

	str = malloc(_strlen(_uitoa(n, 16)) * sizeof(char));
	_strcpy(str, _uitoa(n, 16));
	return (str);
}

/**
 * op_hex_upper - converts uint to hex string, uppercase
 * @n: int
 *
 * Return: new string
 */

char *op_hex_upper(unsigned int n)
{
	int i;
	char *str;

	str = malloc(_strlen(_uitoa(n, 16)) * sizeof(char));
	_strcpy(str, _uitoa(n, 16));
	for (i = 0; str[i]; i++)
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] += 32;
	return (str);
}
