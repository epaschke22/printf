#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);

int _islower(int c);
int _isupper(char c);
int _isalpha(int c);
int _isdigit(int c);
int _abs(int n);

int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strncat(char *s1, char *s2, int n);

char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);

char *str_concat(char *s1, char *s2);
char *str_nconcat(char *s1, char *s2, unsigned int n);

char *rev_string(char *s);
char *rot13(char *s);

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);

char *_itoa(int value);
<<<<<<< HEAD
char *_uitoa(int value, int base);

char *op_percent(char c);
=======
char *_uitoa(unsigned int value, int base);

char *op_percent(void);
>>>>>>> 656d22a10d47cd05732a02692c632bc22747057d
char *op_char(char c);
char *op_string(char *s);
char *op_int(int n);
char *op_binary(unsigned int n);
char *op_uint(unsigned int n);
char *op_octal(unsigned int n);
char *op_hex_lower(unsigned int n);
char *op_hex_upper(unsigned int n);
char *op_reverse(char *s);
char *op_rot(char *s);

unsigned int _printf(const char * const format, ...);
#endif
