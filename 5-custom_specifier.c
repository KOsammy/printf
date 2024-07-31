#include "main.h"

	/**
	* print_string_custom - Prints a string,
	* replacing non-printable characters.
	* @c: characters string
	* return: nothing
	*/void print_string_custom(unsigned char c)
{
	const char *hex_digits = "0123456789ABCDEF";

	_putchar('\\');
	_putchar('x');
	_putchar(hex_digits[c >> 4]);
	_putchar(hex_digits[c & 0x0F]);
}
