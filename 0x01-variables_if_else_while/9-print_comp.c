#include <stdio.h>

/**
 * main -Entry point
 * author: oluwatosin
 * Return: Always 0 (Success)
 */
int main(void)
{
	int oluwatosin;

	for (oluwatosin = 48; oluwatosin < 58; oluwatosin++)
	{
		putchar(oluwatosin);
		if (oluwatosin != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
