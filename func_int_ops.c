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
/*	int len;*/

	str = _itoa(n);
/*	ptr = malloc(_strlen(str) * sizeof(char));

	_strcpy(str, ptr);
	free(str);*/
	return (str);
}

/**
 * op_uint - converts uint to string
 * @n: int
 *
 * Return: new string
 */

char *op_uint(unsigned int n)
{
	char *str;

	str = _uitoa(n, 10);
	return (str);
}

/**
 * op_binary - converts uint to binary string
 * @n: int
 *
 * Return: new string
 */

char *op_binary(unsigned int n)
{
	char *str;

	str = _uitoa(n, 2);
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

	str = _uitoa(n, 8);
	return (str);
}
