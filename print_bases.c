#include "main.h"

/**
 * print_hex - prints a number in lower case hexa base
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Code crafted with love and caffeine
 * Description: The function calls convert(), which then
 * changes the input number's base and returns the
 * result as a string
 * Return: number of char printed
 */
int print_hex(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 1);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0x");
	count += _puts(str);
	return (count);
}

/**
 * print_hex_big - prints a number in upper case haxe base
 * @l: va_list arguments from _printf
 * @f: pointer to the struct tha tindicates
 * whether a flag is passed to _printf or not
 * Description: The function calls convert(), which then
 * changes the input number's base and returns the
 * result as a string
 * Return: number of char printed
 */
int print_hex_big(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 16, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _puts("0X");
	count += _puts(str);
	return (count);
}

/**
 * print_binary - print a number in base 2
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that determines
 * whether a flag is passed to _printf or not
 * Description: The function calls convert(), which then
 * changes the input number's base and returns the
 * result as a string
 * Return: number of char printed
 */
int print_binary(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 2, 0);

	(void)f;
	return (_puts(str));
}

/**
 * print_octal - print number in base 8
 * @l: va_list arguments from _printf
 * @f: pointer to the struct that indicates
 * whether a flag is passed to _printf or not
 * Description: The function calls convert(), which then
 * changes the input number's base and returns the
 * result as a string
 * Return: Number of char printed
 */
int print_octal(va_list l, flags_t *f)
{
	unsigned int num = va_arg(l, unsigned int);
	char *str = convert(num, 8, 0);
	int count = 0;

	if (f->hash == 1 && str[0] != '0')
		count += _putchar('0');
	count += _puts(str);
	return (count);
}
