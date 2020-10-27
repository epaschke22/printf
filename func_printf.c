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
	case 'p':
		return (op_pointer(va_arg(arg, unsigned long int)));
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
	int i, j, byte_n = 0, kilochar = (1024 * sizeof(char));
	char *buffer, *string;

	if (format == NULL || format[0] == '\0' || !format)
		return (-1);
	buffer = malloc(kilochar);
	va_start(arg, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{
				free(string);
				free(buffer);
				return (-1);
			}
			string = op_manage(format[i + 1], arg);
			if (string != NULL)
			{
				for (j = 0; string[j] != '\0'; j++)
				{
					buffer[byte_n % kilochar] = string[j];
					byte_n++;
					if (byte_n % kilochar == 0 && byte_n != 0)
					write(1, buffer, kilochar);
				}
				i++;
				continue;
			}
		}
		buffer[byte_n % kilochar] = format[i];
		byte_n++;
		if (byte_n % kilochar == 0 && byte_n != 0)
			write(1, buffer, kilochar);
	}
	va_end(arg);
	if (byte_n % kilochar != 0)
		write(1, buffer, (byte_n % kilochar));
	free(buffer);
	return (byte_n);
}
