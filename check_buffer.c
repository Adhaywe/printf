#include "main.h"

/**
 * check_buffer - fucnction that checks if we are writing over buffer space
 * @buffer: buffer holding string to print
 * @len: position in buffer
 *
 * Return: length position
 */
int check_buffer(char *buffer, int len)
{
	if (len > 1024)
	{
		write(1, buffer, len);
		len = 0;
	}
	return (len);
}
