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
 * _isupper - checks if a char is upper
 * @c: input char
 * Return: 1 if true, else 0
 */
int _isupper(char c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * _isalpha - checks if a char is a letter
 * @c: input char
 * Return: 1 if true, else 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/**
 * _isdigit - Returns 1 if number, else 0.
 * @c: input char
 * Return: 1 if true, else 0
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
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
