#include <unistd.h>
/**
 * main - writes _putchar to stdout
 * _putchar: the character to be printed
 *
 * Return: On success return 0
 */
int _putchar(char b)
{
	return (write(1, &b, 1));
}

