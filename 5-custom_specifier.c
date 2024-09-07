#include "main.h"

void print_hex_upper(unsigned char c);

	/**
	* print_custom_string_format - handles the %S format
	* @args: va_list containing the string to print
	*
	* Return: Number of characters printed
	*/int print_custom_string_format(va_list args)
{
	char *str = va_arg(args, char *);
	int count = 0;

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		if (*str > 0 && (*str < 32 || *str >= 127))
		{
			print_char('\\');
			print_char('x');
			print_hex_upper(*str);
			count += 4;
		}
		else
		{
			print_char(*str);
			count++;
		}
		str++;
	}
	return (count);
}

	/**
	* print_hex_upper - prints a character's ASCII value in uppercase hex
	* @c: the character whose ASCII value to print
	*/void print_hex_upper(unsigned char c)
{
	char hex[] = "0123456789ABCDEF";
	print_char(hex[c >> 4]);
	print_char(hex[c & 0x0F]);
}
