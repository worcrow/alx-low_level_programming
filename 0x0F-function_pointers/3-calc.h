#ifndef HEADER_H
#define HEADER_H
/*#define NULL ((void *)0)*/
#include <stdlib.h>
#include<string.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * struct op - struct hold the type of the operator and function for that type
 * @op: The operator
 * @f: The function associated
*/
	typedef struct op
	{
		char *op;
		int (*f)(int a, int b);
	} op_t;
	int op_add(int a, int b);
	int op_sub(int a, int b);
	int op_mul(int a, int b);
	int op_div(int a, int b);
	int op_mod(int a, int b);
	int (*get_op_func(char *s))(int, int);
#endif
