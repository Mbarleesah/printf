#include "main.h"

/**
 * get_flag - turns on flags if _printf finds
 * flag modifier
 * @g: character that holds flag
 * @m: pointer to struct flag in which turn flags on
 *
 * Return: 1 if flag has been turned on, 0 otherwise
 */
int get_flag(char g, flags_t *m)
{
	int x = 0;

	switch (g)
	{
		case '+':
			m->plus = 1;
			x = 1;
			break;
		case ' ':
			m->space = 1;
			x = 1;
			break;
		case '#':
			m->hash = 1;
			x = 1;
			break;
	}

	return (x);
}
