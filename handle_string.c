#include "main.h"
/**
 * handle_string - prints a string
 * @str: string to be printer
 * Return: length of the string
*/
int handle_string(char *str)
{
	int count;

	if (str == NULL)
	{
		handle_string("(null)");
		return (6);
	}

	while (*str)
	{
		_putchar(*str);
		count++;
		str++;
	}
	return (count);
}
