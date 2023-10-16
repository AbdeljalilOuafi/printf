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
		_putchar(character);
		count++;
	}
	else if (*format == 's')
	{
		str = va_arg(args, char *);
		count += handle_string(str);
	}
<<<<<<< HEAD
	else if (*format == 'd' || *format == 'i')
	{
		number = va_arg(args, int);
		count += handle_integer(number);
	}
	else if (*format == '%')
=======
	/*else if (*format == 'd' || *format == 'i')*/
	/*{*/
		/*number = va_arg(args, int);*/
		/*+= handle_integer(number);*/
	/*}*/
	else
>>>>>>> fcb0a67c67d01a58a875eb637899c842913c26e5
	{
		_putchar(*format);
		count++;
		format++;
	}
	return (count);
}
