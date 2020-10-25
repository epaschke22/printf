#include "holberton.h"

/**
 * rev_str - prints the string backwards
 * @s: input string
 * Return: reversed string
 */
char *rev_string(char *s)
{
	int len, i = 0;
	char temp;
	char *rev;

	len = _strlen(s) - 1;
	while (i <= len)
	{
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
		i++;
		len--;
	}
	return (s);
}

/**
 * rot13 - roates the characters 13 places
 * @s: input string
 * Return: returns new string
 */
char *rot13(char *s)
{
	int i, j;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != 0; i++)
		for (j = 0; alpha[j] != 0; j++)
			if (s[i] == alpha[j])
			{
				s[i] = rot13[j];
				break;
			}
	return (s);
}