#include <stdio.h>

/**
 * main - Entry point
 * author: oluwatosin
 * Return: Always 0 (Success)
 */
int main(void)
{
	char oluwatosin;

	for (oluwatosin = 'z'; oluwatosin >= 'a'; oluwatosin--)
		putchar(oluwatosin);
	putchar('\n');
	return (0);
}
