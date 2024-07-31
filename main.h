#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
void print_char(char c);
int print_binary_format(va_list args);
int print_unsigned_int_format(va_list args);
int print_octal_format(va_list args);
int print_hex_format(va_list args);

#endif /* MAIN_H */
