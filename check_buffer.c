#include "main.h"

/**
 * create_buffer - creates buffer to hold string until it's ready for print
 * Return: pointer to buffer created
 */
char *create_buffer(void)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (NULL);
	return (buffer);
}

/**
 * write_buffer - prints buffer, then frees it and frees va_list
 * @buffer: buffer holding print-ables
 * @len: length of print-able string
 * @arg: va_list
 */
void write_buffer(char *buffer, int len, va_list arg)
{
	char *buff;

	buff = realloc(buffer, len); /* realloc to correct size */
	write(1, buff, len); /* print */

	free(buff);
	va_end(arg);
}
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
