#include "holberton.h"

/**
 * _islower - checks if a char is lower
 * @c: input char
 * Return: 1 is true, else 0
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * _abs - converts int into a positive number
 * @n: input int
 * Return: new value of n
 */
int _abs(int n)
{
	return (n < 0 ? -n : n);
}

/**
 * _strlen - returns string length
 * @s: input string pointer
 * Return: int of length
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination of the copied string
 * @src: the source of the string to be copied
 * Return: destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}

/**
 * _strcat - concatenates 2 strings
 * @dest: the combined output of both strings
 * @src: the string to be combined
 * Return: returns the combined strings
 */
char *_strcat(char *dest, char *src)
{
	int len, i;

	len = _strlen(dest);

	for (i = 0; src[i]; i++)
		dest[len + i] = src[i];
	return (dest);
}
