#include "main.h"

/**
 * _puts - new line printed by a string
 * @str: the string to print
 *
 * Return: nothing
 */
int _puts(char *str)
{
	char *a = str;

	while (*str)
		_putchar(*str++);
	return (str - a);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(int c)
{
	static int e;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || e >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, e);
		e = 0;
	}
	if (c != BUF_FLUSH)
		buf[e++] = c;
	return (1);
}
