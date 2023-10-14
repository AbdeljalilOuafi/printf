#include "main.h"

/**
 * handle_integer - This function converts
 * the integer into a string in order to be
 * printed using the _putchar function
 * @num: integer to be converted
 * Return: lenght of the number
*/
int handle_integer(int num)
{
	char buffer[12];

	int position = 0;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num == 0)
	{
		buffer[position] = '0';
		position++;
	}
	while (num > 0)
	{
		int remainder = num % 10; /*example : if num = 123, remainder would be 3*/
		buffer[position] = remainder + '0'; /*in this line 3 turns into a string by adding '0' to it,
											 and storing it on the first index of buffer which is 0*/
		position++; /*move the index of buffer by 1 to store the next number and also gives us the length of the number to return to printf*/
		num = num / 10; /*this line gets the next number
						  example : 123 / 10 is 12*/
	}
	int start = 0;
	int end = position - 1;
	/*Reversing the string using the swap method*/
	while (start < end)
	{
			char temp = buffer[start];
			buffer[start] = buffer[end];
			buffer[end] = temp;
			start++;
			end--;
	}
	buffer[position] = '\0';
	/*Printing the string*/
	for (int i = 0; i < position; i++)
	{
		_putchar(buffer[i]);
	}
	return (position);
}
