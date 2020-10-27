#include <stdlib.h>
#include "holberton.h"

/**
 * op_percent - returns string with a %
 * @c: char
 *
 * Return: string
 */

char *op_percent(void)
{
	char *str = malloc(sizeof(char) * 2);

	_strcpy(str, "%\0");
	return (str);
}

/**
 * op_char - inputs a char to return a string
 * @c: char from va list
 *
 * Return: new string.
 */

char *op_char(char c)
{
	char *str = malloc(sizeof(char) * 2);

	_strcpy(str, " \0");
	str[0] = c;
	return (str);
}

/**
 * op_string - returns string
 * @s: a string
 *
 * Return: string
 */

char *op_string(char *s)
{
	if (s == NULL)
		return ("(null)");
	return (s);
}

/**
 * op_reverse - returns reversed string
 * @s: a string
 *
 * Return: string
 */

char *op_reverse(char *s)
{
	if (s == NULL)
		return ("(null)");
	s = rev_string(s);
	return (s);
}

/**
 * op_rot - returns rot13'd string
 * @s: a string
 *
 * Return: string
 */

char *op_rot(char *s)
{
	if (s == NULL)
		return ("(null)");
	s = rot13(s);
	return (s);
}
