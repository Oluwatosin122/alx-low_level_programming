#include "main.h"
/**
 * print_last_digit - prints the last digits of any number
 * @n: the int value to be acted upon
 * author: oluwatosin
 * Return: returns the last digit to calling function
 */
int print_last_digit(int c)
{
	if (c > 9 || c == 0)
	{
	_putchar (c % 10 + '0');
	return (c % 10);
	}
	else
	{
	c = c * -1;
	_putchar (c % 10 + '0');
	return (c % 10);
	}
}
