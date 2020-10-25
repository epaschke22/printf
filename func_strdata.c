#include "holberton.h"

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
	int arrpos;

	for (arrpos = 0; src[arrpos]; arrpos++)
		dest[arrpos] = src[arrpos];
	dest[arrpos] = '\0';
	return (dest);
}

/**
 * _strncpy - copies a string with n bytes.
 * @dest: the output of the copied string.
 * @src: the string to be copied.
 * @n: the total bytes to be copied.
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int arrpos;

	for (arrpos = 0; arrpos < n && src[arrpos]; i++)
		dest[arrpos] = src[arrpos];
	for (; arrpos < n; arrpos++)
		dest[arrpos] = '\0';
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

	len = _strlen(dest)
		for (i = 0; src[i]; i++)
			dest[len + i] = src[i];
	return (dest);
}

/**
 * _strcmp - compares 2 strings.
 * @s1: first string to be compared.
 * @s2: second string to be compared.
 * Return: difference in ascii value of first non matching pair
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i]; i++)
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (0);
}
