#include "main.h"


/**
 * _islower - returns 1 if char is lowercase
 *
 * @c: char to be checked if lower case.
 *
 * Return: 1 if lower case
 **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
