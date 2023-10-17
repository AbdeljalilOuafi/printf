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
	int count = 0;
	int number;
	unsigned int num;

	if (*format == 'c')
	{
		count += _putchar(va_arg(args, int));
	}
	else if (*format == 's')
	{
		count = handle_string(va_arg(args, char *));
	}
	else if (*format == '%')
	{
		count += _putchar('%');
	}
	else if (*format == 'd')
	{
		number = va_arg(args, int);
		count += print_decimal(number);
	}
	else if (*format == 'i')
	{
		number = va_arg(args, int);
		count += print_int(number);
	}
	else if (*format == 'b')
	{
		num = va_arg(args, unsigned int);
		count += handle_binary(num);
	}
	else
	{
		write(1, "%", 1);
		_putchar(*format);
		count += 2;
	}
	return (count);
}
