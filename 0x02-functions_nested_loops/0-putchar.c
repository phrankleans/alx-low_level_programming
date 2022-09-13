#include "_putchar.h"

/**
 * main - program that prints ALX.
 *
 * Return: int
 */

int main(void)
{
	int n = 0;
	char str_alx[9] = "ALX";

	while (n < 9)
	{
		_putchar(str_alx[n]);
		n += 1;
	}
	_putchar('\n');
	return (0);
}
