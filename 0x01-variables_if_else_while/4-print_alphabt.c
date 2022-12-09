#include <stdio.h>
/**
 * main - So betty can we now be friends
 *
 * code: by Richard
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
