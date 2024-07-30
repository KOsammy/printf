#include <stdio.h>
#include <stdlib.h>

/******===HANDLER FUNCTONS (%d and %i)===******/


/**
 * print_int - prints an integer
 * @n: integer argument
 * return: nothing
*/void print_int(int n)
{
	int digits[10];
	int i = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n == -2147483648)
	{
		putchar('-');
		putchar('2');
		n = 147483648;
	}
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	while (n > 0)
	{
		digits[i] = n % 10;
		n /= 10;
		i++;
	}

	while (i > 0)
	{
		i--;
		putchar('0' + digits[i]);
	}
}


/**
 * print_int - prints an integer
 * @i: integer argument
 * return: nothing
*/void print_integer(int i)
{
	char buffer[12];
	int index = 0;
	int j;
	int is_negative = 0;

	if (i == 0)
	{
		putchar('0');
		return;
	}

	if (i < 0)
	{
		is_negative = 1;
		i = -i;
	}

	while (i > 0)
	{
		buffer[index++] = (i % 10) + '0';
		i /= 10;
	}

	if (is_negative)
	{
		buffer[index++] = '-';
	}

	for (j = index - 1; j >= 0; j--)
	{
		putchar(buffer[j]);
	}
}
