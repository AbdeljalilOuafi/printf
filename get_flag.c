#include "main.h"

/**
 * get_flag - Enables flags when _printf identifies
 * flag modifier in the format string
 * @s: character that holds the flag specifier
 * @f: pointer to the struct flags in which we turn the flags on
 *
 * Return: 1 when a flag is activated and 0 when it is not
 */
int get_flag(char s, flags_t *f)
{
	int i = 0;

	switch (s)
	{
		case '+':
			f->plus = 1;
			i = 1;
			break;
		case ' ':
			f->space = 1;
			i = 1;
			break;
		case '#':
			f->hash = 1;
			i = 1;
			break;
	}

	return (i);
}
