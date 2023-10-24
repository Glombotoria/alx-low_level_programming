#include "main.h"

/**
<<<<<<< HEAD
 * print_sign - print sign of number
 * @n: parameter
 * Return:1 , 0 or (-1)
 */

=======
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
>>>>>>> aa7b0e1585262394e75c017354ec428c75e1c59e
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
<<<<<<< HEAD
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
=======
	} else if (n == 0)

		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
>>>>>>> aa7b0e1585262394e75c017354ec428c75e1c59e
}
