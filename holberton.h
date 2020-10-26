#ifndef HOLBERTON_H
#define HOLBERTON_H
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
int _strcmp(char *s1, char *s2);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
char *rev_string(char *s);
char *rot13(char *s);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
unsigned int _printf(const char * const format, ...);
#endif
