#include "main.h"

/**
 * converted - converts number and base to string
 * @num: input
 * @base: input
 * @lowercases: lowercase value
 *
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercases)
{
	static char *view;
	static char buffer[50];
	char *str;

	view = (lowercases)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	str = &buffer[49];
	*str = '\0';
	do {
		*--str = view[num % base];
		num /= base;
	} while (num != 0);

	return (str);
}
