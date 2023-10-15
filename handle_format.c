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
	/*int number;*/

	if (*format == 'c')
	{
		c = va_arg(args, int);
		_putchar(c);
		count++;
	}
	else if (*format == 's')
	{
		str = va_arg(args, char *);
		count += handle_string(str);
	}
	/*else if (*format == 'd' || *format == 'i')*/
	/*{*/
		/*number = va_arg(args, int);*/
		/*+= handle_integer(number);*/
	/*}*/
	else if (*format == '%')
	{
		_putchar('%');
		count++;
		format++;
	}
	return (count);
}
