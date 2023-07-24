#include "main.h"

/**
 * print_hex - prints a number in hexadecimal base
 * @p: va_list argument
 * @m: pointer to struct
 *
 * Return: number of printed char
 */
int print_hex(va_list p, flags_t *m)
{
	unsigned int few = va_arg(p, unsigned int);
	char *ptr = converted(few, 16, 1);
	int find = 0;

	if (m->hash == 1 && ptr[0] != '0')
		find += _puts("0x");
	find += _puts(ptr);
	return (find);
}

/**
 * print_hex_big - prints hexa in uppercase
 * @p: va_list argument
 * @m: pointer to struct
 *
 * Return: number of printed char
 */
int print_hex_big(va_list p, flags_t *m)
{
	unsigned int cut = va_arg(p, unsigned int);
	char *ptr = converted(cut, 16, 0);
	int find = 0;

	if (m->hash == 1 && ptr[0] != '0')
		find += _puts("0X");
	find += _puts(ptr);
	return (find);
}

/**
 * print_binary - prints a number in base 2
 * @p: va_list argument
 * @m: pointer to struct
 *
 * Return: number of printed chars
 */
int print_binary(va_list p, flags_t *m)
{
	unsigned int bin = va_arg(p, unsigned int);
	char *yet = converted(bin, 2, 0);

	(void)m;
	return (_puts(yet));
}

/**
 * print_octal - prints a number in base 8
 * @p: va_list argument
 * @m: pointer to struct
 *
 * Return: number of printed chars
 */
int print_octal(va_list p, flags_t *m)
{
	unsigned int oct = va_arg(p, unsigned int);
	char *yet = converted(oct, 8, 0);
	int find = 0;

	if (m->hash == 1 && yet[0] != '0')
		find += _putchar('0');
	find += _puts(yet);
	return (find);
}
