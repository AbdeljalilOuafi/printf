#include "main.h"

/**
 * handle_binary - converts an unsigned int to its
 * binary presentation
 * @num: integer to be converted
 * Return: count
*/
int handle_binary(unsigned int num)
{
	int count = 0;
	int s;
	int binary[32];
	int i = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}
	while (num > 0)
	{
		binary[i] = num % 2;
		num = num / 2;
		i++;
	}
	s = i - 1;
	while (s >= 0)
	{
		_putchar(binary[s] + '0');
		count++;
		s--;
	}
	return (count);
}
