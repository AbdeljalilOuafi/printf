#include "main.h"

/**
 * get_print - selecting the appropriate printing
 * function to be used
 * @s: character that is holding the conversion specifier
 * Description: The function searches through the func_arr[] array
 * of structs to match the specifier passed to the _printf function
 * with the first element of each struct. Once a match is found
 * the corresponding printing function is used to print the output
 * Return: a pointer to the matching printing function.
 */
int (*get_print(char s))(va_list, flags_t *)
{
	ph func_arr[] = {
		{'i', print_int},
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'u', print_unsigned},
		{'x', print_hex},
		{'X', print_hex_big},
		{'b', print_binary},
		{'o', print_octal},
		{'R', print_rot13},
		{'r', print_rev},
		{'S', print_bigS},
		{'p', print_address},
		{'%', print_percent}
		};
	int flags = 14;

	register int i;

	for (i = 0; i < flags; i++)
		if (func_arr[i].c == s)
			return (func_arr[i].f);
	return (NULL);
}
