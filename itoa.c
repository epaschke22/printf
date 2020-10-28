#include <stdlib.h>
#include "holberton.h"

/**
 * _itoa - converts an int into a string
 * @value: input number
 * @base: base to convert number
 * Return: string if successful
 */
char *_itoa(int value)
{
	char *string, numberbet[10] = "0123456789";
	char intminstr[12] = "-2147483648\0", zero[2] = "0\0";
	int i = 0, tmp_value, charvalue, negativeflag = 0;

 	string = malloc(12 * sizeof(char));
	if (value == 0)
	{
		_strcpy(string, zero);
		return (string);
	}
	if (value < 0)
	{
		if (value == INT_MIN)
		{
			_strcpy(string, intminstr);
			return (string);
		}
		value = _abs(value);
		negativeflag = 1;
	}
	while (value)
	{
		tmp_value = value;
		value /= 10;
		charvalue = tmp_value - value * 10;
		string[i] = numberbet[charvalue];
		i++;
	}
	if (negativeflag == 1)
		string[i] = '-';
	rev_string(string);
	string[i + 1] = '\0';
	return (string);
}

/**
 * _uitoa - converts an int into a string
 * @value: input number
 * @base: base to convert number
 * Return: string if successful
 */
char *_uitoa(unsigned int value, int base)
{
	char *string, numberbet[16] = "0123456789abcdef", zero[2] = "0\0";
	int tmp_value, charvalue, i = 0;

	string = malloc(32 * sizeof(char));
	if (value == 0)
	{
		_strcpy(string, zero);
		return (string);
	}
	while (value)
	{
		tmp_value = value;
		value /= base;
		charvalue = tmp_value - value * base;
		string[i] = numberbet[charvalue];
		i++;
	}
	rev_string(string);
	string[i] = '\0';
	return (string);
}
