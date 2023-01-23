#include "main.h"

/**
 * is_printable - This function evaluates if a char is printable
 * @c: Char to be evaluated.
 * Return 1 if c is printable, 0 if otherwise
*/

int is_printable(char c)
{
    if (c >= 32 && c < 127)
        return (1);

    return(0);
}

/**
 * is_digit - this function varifies if a given char is digit or not
 * @c: Char to be checked
 * Return: 1 if c is a digit, 0 if otherwise
*/

int is_degit(char c)
{
    if (c >= '0' && c <= '9')
        return (1);

    return (0);
}

/**
 * convert_size_number - Casts a number to the specified size
 * @num: Number to be casted.
 * @size: Number indicating the type to be casted.
 *
 * Return: Casted value of num
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}