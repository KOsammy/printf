#include "main.h"

/**
 * print_string_custom - Prints a string, replacing non-printable characters.
 * @str: The string to print.
 *
 * Non-printable characters are printed as \x followed by the ASCII code
 * value in uppercase hexadecimal.
 */
void print_string_custom(unsigned char c)
{
	const char *hex_digits = "0123456789ABCDEF";

	_putchar('\\');
	_putchar('x');
	_putchar(hex_digits[c >> 4]);
	_putchar(hex_digits[c & 0x0F]);
}
