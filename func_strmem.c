#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string input
 * @s2: second string input
 * Return: return combined string.
 */
char *str_concat(char *s1, char *s2)
{
	char *ar;
	int s1len, s2len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1len = _strlen(s1);
	s2len = _strlen(s2);

	ar = malloc(s1len + s2len + 1);

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}
	_strcpy(ar, s1);
	_strcat(ar, s2);
	return (ar);
}

/**
 * string_nconcat - concatenates two strings with n btyes of s2.
 * @s1: first string input.
 * @s2: second string input.
 * @n: bytes of s2.
 * Return: return combined string.
 */
char *str_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ar;
	int s1len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s1len = _strlen(s1);

	ar = malloc(s1len + n + 1);

	if (ar == NULL)
		return (NULL);

	_strcpy(ar, s1);
	_strncat(ar, s2, n);
	return (ar);
}
