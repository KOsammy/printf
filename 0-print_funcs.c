#include <stdio.h>
#include <stdlib.h>

/******===HANDLER FUNCTIONS (%d, %c  and %s)===******/

/**
 * print_int - prints an integer
 * @n: integer argument
 * return: nothing
*/void print_int(int n)
{
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
	int digits[10];
	int i = 0;

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
 * print_char - prints character
 * @c: character argument
 * return: nothing
*/void print_char(char c)
{
	putchar(c);
}


/**
 * print_str - prints string
 * @*s: string pointer
 * return: nothing
 */void print_str(const char *s)
{
	while (*s)
	{
		putchar(*s++);
	}
}
