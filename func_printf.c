#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * op_manage - performs operation on input based on char
 * @c: character
 * @arg: va_list
 *
 * Return: string
 */

char *op_manage(char c, va_list arg)
{
	switch (c)
	{
	case '%':
		return (op_percent());
	case 'c':
		return (op_char(va_arg(arg, int)));
	case 's':
		return (op_string(va_arg(arg, char *)));
	case 'd':
		return (op_int(va_arg(arg, int)));
	case 'i':
		return (op_int(va_arg(arg, int)));
	case 'b':
		return (op_binary(va_arg(arg, unsigned int)));
	case 'u':
		return (op_uint(va_arg(arg, unsigned int)));
	case 'o':
		return (op_octal(va_arg(arg, unsigned int)));
	case 'x':
		return (op_hex_lower(va_arg(arg, unsigned int)));
	case 'X':
		return (op_hex_upper(va_arg(arg, unsigned int)));
	case 'r':
		return (op_reverse(va_arg(arg, char *)));
	case 'R':
		return (op_rot(va_arg(arg, char *)));
	default:
		return (NULL);
	}
}

/**
 * _printf - creates buffer and calls functions for string
 * @format: input string
 *
 * Return: Number of bytes
 */

unsigned int _printf(const char * const format, ...)
{
	va_list arg;
	int i = 0, j = 0, byte_n = 0, kilochar = (1024 * sizeof(char));
	char *buffer, *string;

	buffer = malloc(kilochar);
	va_start(arg, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			string = op_manage(format[i + 1], arg);
			if (string == NULL)
			{
				free(string);
				free(buffer);
				exit(1);
			}
			while (string[j] != '\0')
			{
				buffer[byte_n % kilochar] = string[j];
				byte_n++;
				if (byte_n % kilochar == 0 && byte_n != 0)
					write(1, buffer, (byte_n % kilochar));
				j++;
			}
			j = 0;
			i += 2;
			}
		buffer[byte_n % kilochar] = format[i];
		byte_n++;
		if (byte_n % kilochar == 0 && byte_n != 0)
			write(1, buffer, (byte_n % kilochar));
		i++;
	}
	va_end(arg);
	if (byte_n % kilochar != 0)
		write(1, buffer, (byte_n % kilochar));
	free(buffer);
	return (byte_n);
}
