#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * _printf - generates output according to the format
 * @format: a string that includes both the characters
 * and the specifiers used for formatting
 * Description: When this function is called, it will
 * invoke the get_print() function. The get_print() function will
 * then determine which printing function to call based on
 * the conversion specifiers found in the fmt parameter.
 * Return: length of formatted output string
 */
int _printf(const char *format, ...)
{
	int (*pfunc)(va_list, flags_t *);
	const char *p;
	va_list arguments;
	flags_t flags = {0, 0, 0};

	register int count = 0;

	va_start(arguments, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(arguments, &flags)
				: _printf("%%%c", *p);
		} else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(arguments);
	return (count);

}
/*Code crafted with love and caffeine*/
