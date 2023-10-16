#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @str: string to be calculated
 * Return: length of the string
*/
int _strlen(char *str)
{
	int len;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
