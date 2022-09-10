#include <stdio.h>

/**
 * main - Entry point
 * author: oluwatosin
 * Return: Always 0 (Success)
 */
int main(void)
{
	int oluwatosin;
	char adesida;

	for (oluwatosin = 48; oluwatosin < 58; oluwatosin++)
		putchar(oluwatosin);
	for (adesida = 'a'; adesida <= 'f'; adesida++)
		putchar(adesida);
	putchar('\n');
	return (0);
}
