#include "main.h"

/**
 * print_address - prints address of input in hexa
 * @p: va_list argument
 * @m: pointer to struct flag
 *
 * Return: number of printed chars
 */
int print_address(va_list p, flags_t *m)
{
	char *ptr;
	unsigned long int t = va_arg(p, unsigned long int);

	register int find = 0;

	(void)m;

	if (!t)
		return (_puts("(nil)"));
	ptr = convert(t, 16, 1);
	find += _puts("0x");
	find += _puts(ptr);
	return (find);
}
