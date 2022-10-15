#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>

/**
 * struct op - struct for function objects
 * @c: flag
 * @f: function
 */

typedef struct op
{
	char *c;

	int (*f)(va_list);
} op_t;

int _printf(const char *format, ...);
int _putchar(char c);
int print_hex(unsigned int n, unsigned int c);
int print_c(va_list ar_list);
int (*get_func(char s))(va_list ar_list);
int print_s(va_list ar_list);
int print_i(va_list num_list);
int print_d(va_list ar_list);
int print_b(va_list binary_list);
int print_u(va_list ar_list);
int print_o(va_list ar_list);
int print_x(va_list ar_list);
int prnt_X(va_list ar_list);
int print_R(va_list ar_list);
int prInt_r(va_list ar_list);
int print_p(va_list ar_list);

#endif
