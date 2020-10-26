#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "holberton.h"

/**
 * _itoa - converts an int into a string
 * @value: input number
 * @base: base to convert number
 * Return: string if successful
 */
char* _itoa(int value, int base)
{
	char *string, charstr[2] = " \0", *numberbet;
	int tmp_value, charvalue;

	string = "";
	numberbet = "0123456789abcdef";

	while (value)
	{
		tmp_value = value;
		value /= base;
		charvalue = tmp_value - value * base;
		charstr[0] = numberbet[charvalue];
		string = str_concat(string, charstr);
	}
	rev_string(string);

	return (string);
}

int main(void)
{
	char *s;

	s = _itoa(451460, 10);
	printf("%s\n", s);
	s = _itoa(451460, 16);
	printf("%s\n", s);
	s = _itoa(INT_MAX, 10);
	printf("%s\n", s);
	s = _itoa(INT_MAX, 16);
	printf("%s\n", s);
	s = _itoa(10000000, 8);
	printf("%s\n", s);
	s = _itoa(INT_MAX, 2);
	printf("%s\n", s);
	return (0);
}
