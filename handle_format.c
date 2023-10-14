#include "main.h"

/**
 * handle_format - handles specific format specifiers
 * @format: pointer to the current format specifier
 * @args: va_list containing the arguments
 *
 * Return: the number of characters printed
 */
int handle_format(const char *format, va_list args)
{
	char c;
	char *str;
	int count = 0;
	int number;

	if (*format == 'c')
	{
		c = va_arg(args, int);
		_putchar(c);
	}
	else if (*format == 's')
	{
		str = va_arg(args, char *);
		count += handle_string(str);
	}
	else if (*format == 'd' || *format == 'i')
	{
		number = va_arg(args, int);
		count += handle_integer(number);
	}
	else if (*format == '%')
	{
		_putchar('%');
		count++;
	}
	return (count);
}

/**
 * skip_format_specifier - advances the format string to the next specifier
 * @format: pointer to the current format specifier
 *
 * Return: pointer to the next format specifier
 */
const char *skip_format_specifier(const char *format)
{
	while (*format && !is_format_specifier(*format))
	{
		format++;
	}
	return (format);
}

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
