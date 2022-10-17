#ifndef MAIN_H_
#define MAIN_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

/* Flags struct */
typedef struct flags
{
	int plus;
	int space;
	int hash;
} flag_t;

/* Modifiers struct */
typedef struct modifiers
{
	int l;
	int h;
	int width;
} mod_t;

/* identifiers struct */
typedef struct identifiers
{
	char symbol;
	int (*func)(va_list, flag_t *, mod_t *);
} id;



/* Write functions*/
int _putchar(char c);
int _puts(char *str);


/* _printf */
int _printf(const char *format, ...);

/* Print character functions */
int _print_char(va_list, flag_t *, mod_t *);
int _print_str(va_list, flag_t *, mod_t *);
int _print_specifier(va_list, flag_t *, mod_t *);

/* Print numbers in decimal */
int  _print_dec(va_list, flag_t *, mod_t *);

/* Print numbers in other bases */
int _print_binary(va_list, flag_t *, mod_t *);
int _print_hexa_upper(va_list, flag_t *, mod_t *);
int _print_hexa_lower(va_list, flag_t *, mod_t *);
int _print_octal(va_list, flag_t *, mod_t *);
int _print_unsigned(va_list, flag_t *, mod_t *);
int _print_address(va_list, flag_t *, mod_t *);

/* Print addresses in hexadecimal format */
int _print_address(va_list, flag_t *, mod_t *);

/* Print custom */
int _print_percent(va_list, flag_t *, mod_t *);
int _print_reverse(va_list, flag_t *, mod_t *);
int _print_rot13(va_list, flag_t *, mod_t *);

/* Helper functions */
void print_number(long n);
int count_digits(long n);
char *convert(unsigned long num, int base, int lowercase);

/* Function Pointer Generator */
int (*get_func(char c))(va_list, flag_t *, mod_t *);

/* Sets flags */
int get_flags(char elem, flag_t *);

/* Sets the modifiers */
int get_modifier(char elem, mod_t *);
void set_width(int width, mod_t *);

#endif /* MAIN_H_ */
