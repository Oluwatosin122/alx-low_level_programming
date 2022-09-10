#include <stdio.h>

/**
 * main - Entry point
 * author: oluwatosin
 * Return: Always 0 (Success)
 */
int main(void)
{
	char oluwatosin;

	for (oluwatosin = 'a'; oluwatosin <= 'z'; oluwatosin++)
	{
		if (oluwatosin != 'q' && oluwatosin != 'e')
			putchar(oluwatosin);
	}
	putchar('\n');
	return (0);
}
