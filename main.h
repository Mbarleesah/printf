#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct flags - struct containing flags
 * @Plus: + flag specifier
 * @Space: ' ' flag specifier
 * @Hash: # flag specifier
 */
typedef struct flags
{
	int Plus;
	int Space;
	int Hash;
} flags_t;

/**
 * struct printHandler - choose right function
 * @c: format specifier
 * @f: pointer to printing function
 */
typedef struct printHandler
{
	char c;
	int (*m)(va_list p, flags_t *m);
} as;

/* nums */
int print_int(va_list p, flags_t *m);
void print_number(int n);
int print_unsigned(va_list p, flags_t *m);
int count_digit(int i);

/* bases */
int print_hex(va_list p, flags_t *m);
int print_hex_big(va_list p, flags_t *m);
int print_binary(va_list p, flags_t *m);
int print_octal(va_list p, flags_t *m);

/* converter */
char *convert(unsigned long int num, int base, int lowercase);

/* _printf */
int _printf(const char *format, ...);

/* print */
int (*get_print(char s))(va_list, flags_t *m);

/* flag */
int get_flag(char s, flags_t *m);

/* alpha */
int print_string(va_list p, flags_t *m);
int print_char(va_list p, flags_t *m);

/* write_func */
int _putchar(char c);
int _puts(char *str);

/* others */
int print_rot13(va_list p, flags_t *m);
int print_rev(va_list p, flags_t *m);
int print_bigS(va_list p, flags_t *m);

/* address */
int print_address(va_list p, flags_t *m);

/* percent */
int print_percent(va_list p, flags_t *m);

#endif /* MAIN_H */
