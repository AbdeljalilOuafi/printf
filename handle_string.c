#include "main.h"
/**
 * handle_string - prints a string
 * @str: string to be printer
 * Return: length of the string
*/
int handle_string(char *str)
{

	int i;

	i = 0;

	if (str == NULL)
	{
		return (-1);
	}

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
