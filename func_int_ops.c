#include "holberton.h"

char *op_int(int n)
{
	char *ptr, *str;
	int len;

	str = _itoa(n);
	ptr = malloc(_strlen(str) * sizeof(char));

	_strcpy(str, ptr);
	free(str);
	return (ptr);
}
char *op_uint(unsigned int n)
{
}
char *op_binary(unsigned int n)
{
}
char *op_octal(unsigned int n)
{
}
