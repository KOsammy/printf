#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

	/**
	* struct Buffer - A structure to manage a local buffer
	* for efficient writing.
	* @buffer: An array of characters to hold the data
	* before writing.
	* @index: An integer to track the current position
	* in the buffer.
	*
	* Description: structure is used
	* to accumulate output in a local buffer
	* and write it to the standard output
	* in larger chunks to minimize
	* the number of write system calls.
	*/typedef struct
{
	char buffer[BUFFER_SIZE];
	int index;
} Buffer;


int _printf(const char *format, ...);
int _putchar(char c);
void print_int(int n);
void print_integer(int i);
void print_char(char c);
void print_str(const char *s);
void print_binary(unsigned int i);
int print_binary_format(va_list args);
int print_unsigned_int_format(va_list args);
int print_octal_format(va_list args);
int print_hex_format(va_list args);
int print_pointer_format(va_list args);
int print_uppercase_hex_format(va_list args);
void print_unsigned(unsigned int n);
void print_octal(unsigned int n);
void print_lowerhexadecimal(unsigned int n);
void print_upperhexadecimal(unsigned int n);
void buffer_add_string(Buffer *buf, const char *str);
void print_string_custom(unsigned char c);

#endif /* MAIN_H */
