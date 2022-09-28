#include "main.h"
/**
 * _strlen_resursion - returns the length of a string
 * @s: the string to check the length of
 * Return: an integer that displays the length of the string
 */
int _strlen_resursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_resursion(s + 1));

	return (0);
}
