#include "main.h"
/**
 * print_last_digit - prints the last digits of any number
 * @c: the int value to be acted upon
 * author: oluwatosin
 * Return: returns the last digit to calling function
 */
int print_last_digit(int c)
{
	c %= 10;
	if (c < 0)
		c *= -1;
	_putchar(c + 0);
	return (c);

}
