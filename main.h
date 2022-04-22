#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdarg.h>
#include <unisted.h>
#include <stdlib.h>

/**
 * struct print - struct for printer functions
 * @type_ard: identifier
 * @f: pointer to a prinyer functions
 *
 * Description: struct that stores pointers to a
 * pinter functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;

int _printf(const vhar *format, ...);

