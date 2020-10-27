#include "holberton.h"

/**
 * op_int - converts int to string
 * @n: int
 *
 * Return: new string
 */
char *op_int(int n)
{
	char *str;


	str = malloc(_strlen(_itoa(n)) * sizeof(char));
	_strcpy(str, _itoa(n));
	return (str);
}

/**
 * op_uint - converts uunsigned int to string
 * @n: int
 *
 * Return: new string
 */
char *op_uint(unsigned int n)
{
	char *str;

	str = malloc(_strlen(_uitoa(n, 10)) * sizeof(char));
	_strcpy(str, _uitoa(n, 10));
	return (str);
}

/**
 * op_binary - converts uunsigned int to binary string
 * @n: int
 *
 * Return: new string
 */
char *op_binary(unsigned int n)
{
	char *str;

	str = malloc(_strlen(_uitoa(n, 2)) * sizeof(char));
	_strcpy(str, _uitoa(n, 2));
	return (str);
}

/**
 * op_octal - converts uint to octal string
 * @n: int
 *
 * Return: new string
 */
char *op_octal(unsigned int n)
{
	char *str;

	str = malloc(_strlen(_uitoa(n, 8)) * sizeof(char));
	_strcpy(str, _uitoa(n, 8));
	return (str);
}
