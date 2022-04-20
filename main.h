#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>/* va_list*/
#include <stdlib.h>/*NULL ,malloc, free*/
#include <unistd.h>/* write */
/**
 * struct print - structure for printing various data types
 * @t: data type to be printed
 * @f: function to print
 */
typedef struct print
{
	char *t;
	int (*f)(va_list);
} print_t;

int _putchar(char c);
int _printf(const char *format, ...);
int (*get_func(const char *format))(va_list);
char *create_buffer(void);
int print_c(va_list c);
int print_s(va_list s);
int print_i(va_list i);
int print_d(va_list d);
int print_u(va_list u);
int print_b(va_list b);
int print_o(va_list o);
int print_x(va_list x);
int print_X(va_list X);
int print_p(va_list p);
int print_S(va_list S);
int print_r(va_list r);
int print_R(va_list R);
int print_percent(va_list P);

#endif  /* MAIN_H */
