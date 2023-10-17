#include "main.h"
/**
 * print_int - Prints an integer
 * @n: argument for int
 * Return: count
 */
int print_int(int n)
{
	int num, length = n % 10, d, num2 = 1;
	int  count = 1;

	n = n / 10;
	num = n;

	if (length < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		length = -length;
		count++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			num2 = num2 * 10;
			num = num / 10;
		}
			num = n;
		while (num2 > 0)
		{
			d = num / num2;
			_putchar(d + '0');
			num = num - (d * num2);
			num2 = num2 / 10;
			count++;
	}
	}
	_putchar(length + '0');

	return (count);
}
