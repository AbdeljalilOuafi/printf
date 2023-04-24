#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int len;
	unsigned int ui;

	ui = (unsigned int)INT_MAX + 1024;
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", "%z");
	printf("Character:[%c]\n", '%');
	len = _printf("%b\n", 98);
	printf("%d\n", len);
	printf("%d\n", len);
	_printf("%d\n", len);
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	 _printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("hello [%c] oh\n", '\n');
	_printf("hello [%c] oh\n", '\n');
	return (0);
}
