#include "holberton.h"

/**
 * _itoa - converts an int into a string
 * @value: input number
 * @base: base to convert number
 * Return: string if successful
 */
char *_itoa(int value)
{
	char *string, *intminp, numberbet[10] = "0123456789";
	char intminstr[12] = "-2147483648\0";
	int i = 0, tmp_value, charvalue, negativeflag = 0;

	intminp = intminstr;
	string = malloc(32 * sizeof(char));
	if (value < 0)
	{
		if (value == INT_MIN)
			return (intminp);
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
	string[i + 1] = '\0';
	rev_string(string);
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
	char *string, numberbet[16] = "0123456789abcdef";
	int tmp_value, charvalue, i = 0;

	string = malloc(12 * sizeof(char));
	while (value)
	{
		tmp_value = value;
		value /= base;
		charvalue = tmp_value - value * base;
		string[i] = numberbet[charvalue];
		i++;
	}
	string[i] = '\0';
	rev_string(string);
	return (string);
}

int main(void)
{
	char *s;

	s = _uitoa(451460, 2);
	printf("%s\n", s);
	s = _uitoa(451460, 16);
	printf("%s\n", s);
	s = _itoa(9786);
	printf("%s\n", s);
	s = _itoa(32567);
	printf("%s\n", s);
	return (0);
}
