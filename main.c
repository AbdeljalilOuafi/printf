#include "main.h"
/**
 * main - Entry Point
 *
 * Return: 0
 */
int main(void)
{
	int count;

	count = _printf("%s%c%%", "F", 'F');
	printf("\n%d\n", count);
	return (0);
}
