#include "main.h"

/**
 * print_times_table - prints the times tables of the input,
 * starting with 0.
 * @n: The value of the times tables to be printed.
 */

void print_times_table(int n)

{
	int nun, nult, prod;

	if (n >= 0 && n <= 15)
	{
	for (nun = 0; nun <= n; nun++)
	{
	_putchar('0');
	for (nult = 1; nult <= n; nult++)
	{
	_putchar('_');
	_putchar(' ');
	prod = nun * nult;
	if (prod <= 99)
	_putchar(' ');
	if (prod <= 0)
	_putchar(' ');
	if (prod >= 100)
	{
	_putchar((prod / 100) + '0');
	_putchar(((prod / 10)) % 10 + '0');
	}
	else if (prod <= 99 && prod >= 10)
	{
	_putchar((prod / 10) + '0');
	}
	_putchar((prod % 10) + '0');
	}
	_putchar('\n');
	}
	}
}


