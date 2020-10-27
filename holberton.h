#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

int _islower(int c);
int _abs(int n);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);

char *rev_string(char *s);
char *rot13(char *s);

char *_itoa(int value);
char *_uitoa(unsigned int value, int base);

char *op_percent(void);
char *op_char(char c);
char *op_string(char *s);
char *op_int(int n);
char *op_binary(unsigned int n);
char *op_uint(unsigned int n);
char *op_octal(unsigned int n);
char *op_hex_lower(unsigned int n);
char *op_hex_upper(unsigned int n);
char *op_pointer(unsigned long int n);
char *op_reverse(char *s);
char *op_rot(char *s);

unsigned int _printf(const char * const format, ...);
#endif
