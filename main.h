#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* _printf */
int _printf(const char *format, ...);

/* write functions */
int _putchar(char c);
int handle_string(char *str);
/*int handle_integer(int num);*/

/* formatting */
int handle_format(const char *format, va_list args);
const char *skip_format_specifier(const char *format);
int is_format_specifier(char c);


#endif /* !MAIN_H */
