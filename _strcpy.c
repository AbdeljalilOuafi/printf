#include "main.h"

/**
 * _strcpy - Copy a string to a destination buffer.
 *
 * @destination: Pointer to the destination buffer.
 * @source:  Pointer to the source string.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *destination, const char *source)
{
	char *originalDestination = destination;

	while (*source)
	{
		*destination = *source;
		source++;
		destination++;
	}
	*destination = '\0';

	return (originalDestination);
}
