#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct flags - struct containing flags
 * @plus: + flag specifier
 * @space: ' ' flag specifier
 * @hash: # flag specifier
 */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flags_t;

/**
 * struct printHandler - choose right function
 * @c: format specifier
 * @m: pointer to printing function
 */
typedef struct printHandler
{
	char c;
	int (*m)(va_list p, flags_t *m);
} as;

/* numb */
int print_int(va_list p, flags_t *m);
void print_number(int n);
int print_unsigned(va_list p, flags_t *m);
int count_digit(int i);

/* superbase */
int print_hex(va_list p, flags_t *m);
int print_hex_big(va_list p, flags_t *m);
int print_binary(va_list p, flags_t *m);
int print_octal(va_list p, flags_t *m);

/* convert */
char *convert(unsigned long int num, int base, int lowercases);

/* _printf */
int _printf(const char *format, ...);

/* print */
int (*get_print(char s))(va_list, flags_t *m);

/* FLAGS */
int get_flag(char s, flags_t *m);

/* alphate */
int print_string(va_list p, flags_t *m);
int print_char(va_list p, flags_t *m);

/* write_funt */
int _putchar(char c);
int _puts(char *str);

/* other */
int print_rot13(va_list p, flags_t *m);
int print_rev(va_list p, flags_t *m);
int print_bigS(va_list p, flags_t *m);

/* addr */
int print_address(va_list p, flags_t *m);

/* percent */
int print_percent(va_list p, flags_t *m);

#endif /* MAIN_H */
