#include <stdio.h>

/**
 * main - so betty where are you taking me to
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int i = 0;

	while (i < 48)
	{
		if (i < 10)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}
	putchar(10)

	return (0);
}
