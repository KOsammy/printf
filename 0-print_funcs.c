#include <stdio.h>
#include <stdlib.h>

/******===HANDLER FUNCTIONS (%c  and %s)===******/


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
