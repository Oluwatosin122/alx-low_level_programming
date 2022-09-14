#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @n: The intto be operate upon
 * author: oluwatosin
 * Return: returns anunsigned int value to calling function
 */
int _abs(int n)
{
	if (n > 0)
		return (n);

	{
		n *= -1;
		return (n);
	}
}
