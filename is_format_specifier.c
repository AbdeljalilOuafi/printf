#include "main.h"

/**
 * is_format_specifier - checks if a character is a valid format specifier
 * @c: the character to check
 *
 * Return: 1 if it's a valid specifier, 0 otherwise
 */

int is_format_specifier(char c)
{
	return (c == 'c' || c == 's' || c == '%' || c == 'd' || c == 'i');
}
