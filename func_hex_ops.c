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

	str = _uitoa(n, 16);
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
	char *str;

	str = _uitoa(n, 16);
	return (str);
}
