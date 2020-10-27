# _printf

## Description

This project is a recreation of a the printf function from the standard input output library for C. This project is meant to function the same way in most cases. These cases include printing numbers, strings, and characters. Other implemented features include converting numbers into binary, octal, and hexadecimal, as well as printing pointer values as a hexadecimal value. This function also can reverse strings and rotate characters 13 places in the alphabet.

This version also calls the write command in as few times as possible saving the out put into a buffer the size of 1024 characters.

This project dose not reproduce the width or persision flags between the % and conversion modifyer. It does not process long or short ints. It does not process floating point numbers either.

## Usage

To use this function properly, you must pass in a string of chars as the first argum\
ent. Within this argument, you can use a conversion spcifier which use a % sign followed by specific character. These characters expect a following argument in printf after the first agument to match and replace the conversion spcifier, in the same order.
Working conversion mofidiers are:

| Specifier | Expects | Prints|
| ------ | ------ | ------ |
| %s | char * | string
| %c | char | single char
| %d | int | decimal int
| %i | int | decimal int
| %u | unsigned int | decimal unsigned int
| %o | unsigned int | octal unsigned int
| %x | unsigned int | hexadecimal unsigned int
| %X | unsigned int | hexadecimal int with capital letters
| %p | pointer | hexadecimal value of pointer adress
| %r | char * | string in reverse
| %R | char * | string with all characters rotated 13 places

## Examples

```c
char *str = "hello";
char c = 'I';
int i = 35, j = 8, k = -12;
unsigned int num1 = 4567, num2 = 1000, num3 = 1023;

_printf("This is a string [%s]\n", str);
This is a string [hello]

_printf("Two strings, %s %s\n", str, "goodbye");
Two strings, hello goodbye

_printf("Two functions, one line, %s", str);
_printf("%s\n", "goodbye");
Two functions, hello goodbye

_printf("%s! %c love coding!", str, c);
hello! I love coding!

_printf("%d + %i = %d", i, j, (i + j));
35 + 8 = 43

_printf("%d + %i = %d", i, k, (i + k));
35 + -12 = 23

_printf("%u\n%o\n%x\n%X\n%b\n", num1, num2, num3, num3, num2);
4567
1750
3ff
3FF
1111101000

_printf("%p\n", str);
0x45e8b0

_printf("%r %R\n", str, str);
olleh uryyb
```

#### Created by:
Erickson Paschke and Maxwell Lovell