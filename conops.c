#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * chartostr - inputs a char to return a string
 * Return: new string.
 */
char *chartostr(char input)
{
	char charstr[2] = " /0";

	charstr[0] = input;
	return (charstr);
}
