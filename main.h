#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_char(char c);
int print_binary_format(va_list args);
int print_unsigned_int_format(va_list args);
int print_octal_format(va_list args);
int print_hex_format(va_list args);

/*void buffer_add_string(Buffer *buf, const char *str);
void print_string_custom(unsigned char c);*/

#endif /* MAIN_H */

