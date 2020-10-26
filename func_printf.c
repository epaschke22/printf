#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _printf - creates buffer and calls functions for string
 * @format: input string
 *
 * Return: Number of bytes
 */

unsigned int _printf(const char * const format, ...)
{
	va_list arg;
	int i = 0, byte_n = 0, kilochar = (1024 * sizeof(char));
	char *buffer;

	buffer = malloc(kilochar);
	va_start(arg, format);
	while (format[i] != '\0')
	{
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
