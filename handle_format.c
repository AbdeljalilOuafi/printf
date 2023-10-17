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
	char *str;
	int count = 0;
	char character;
	int number;

	if (*format == 'c')
	{
		character = va_arg(args, int);
		count += _putchar(character);
	}
	else if (*format == 's')
	{
		str = va_arg(args, char *);
		count += handle_string(str);
	}
	else if (*format == '%')
	{
		count += _putchar('%');
	}
	else if (*format == 'd' || *format == 'i')
	{
		number = va_arg(args, int);
		count += handle_integer(number);
	}
	return (count);
}
