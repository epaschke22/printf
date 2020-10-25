#include "holberton.h"

/**
 * _strchr - finds and returns the character in a string
 * @s: string to look in
 * @c: character to look for
 * Return: pointer to found letter of s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		if (s[i] == c)
			return (s + i);
	if (c == 0)
		return (s + i);
	return (0);
}

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to search through.
 * @accept: the string to check for.
 * Return: pointer for matching bytes.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
		for (j = 0; accept[j]; j++)
			if (s[i] == accept[j])
				return (s + i);
	if (accept == 0)
		return (s + i);
	return (0);
}

/**
 * _strstr - finds string within another string.
 * @haystack: the string to look through.
 * @needle: the string to return.
 * Return: pointer of substring in haystack
 */
char *_strstr(char *haystack, char *needle)
{
	int counter1 = 0, counter2 = 0, counter3 = 0, place;

	while (needle[counter1] != 0)
		counter1++;
	if (counter1 < 1)
		return (haystack);

	for (counter1 = 0; haystack[counter1]; counter1++)
	{
		if (haystack[counter1] == needle[0])
		{
			place = counter1;
			counter3 = counter1;
			for (counter2 = 0; needle[counter2]; counter2++)
				if (needle[counter2] == haystack[counter3])
					counter3++;
				else
					counter3 = 0;
		}
	}
	if (counter3 > 0)
		return (haystack + place);
	return (0);
}
