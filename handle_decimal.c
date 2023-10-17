#include "main.h"
/**
 * print_decimal - printf a decimal
 * @n: argument for int
 * Return: count
 */
int print_decimal(int n)
{
	int num;
	int length = n % 10;
	int d;
	int count = 1;
	int num2 = 1;

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
