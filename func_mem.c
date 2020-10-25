#include "holberton.h"

/**
 * _memset - fills memory with a constant byte
 * @s: adress
 * @b: constant
 * @n: number of bytes
 * Return: new s value.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: destination of new memory
 * @src: source of new memory
 * @n: number of bytes
 * Return: new dest value.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
