#include "main.h"
/**
 * handle_string - prints a string
 * @str: string to be printer
 * Return: length of the string
*/
int handle_string(char *str)
{
	char *null;

	int count;

	int i;

	count = 0;

	if (str == NULL)
	{
		null = "(null)";

		for (i = 0; i < 6; i++)
		{
			_putchar(*null);
			null++;
		}
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
