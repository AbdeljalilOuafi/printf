#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{

	/**
	 * This main is for testing the count returned by the _printf
	 * %s and %c are not correct, plz fix <3
	 *
	 * Description: we print "hi" using the _printf
	 * after that we store the result returned by _printf to @count
	 * the result is the amount of characters _printf printed which should be 2
	 * after compiling we get 3, same case for %c
	*/
	int count;

	int count2;

	count = _printf("%s user\n", "hi");
	printf("hi = %d\n", count);
	count2 = _printf("%c\n", 'b');
	printf("b = %d", count2);
	return (0);
}
