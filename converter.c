#include "main.h"

/**
 * convert - converts a given number and its base into a string format
 * @num: input num
 * @base: input base
 * @lowercase: determines whether the hexadecimal
 * Code crafted with love and caffeine
 * values should be in lowercase or not
 * Return: result string
 */
char *convert(unsigned long int num, int base, int lowercase)
{
	static char *rep;
	static char buffer[50];
	char *ptr;

	rep = (lowercase)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = rep[num % base];
		num /= base;
	} while (num != 0);

	return (ptr);
}
