#include "main.h"

/**
<<<<<<< HEAD
 * _abs -to find the absolute value of a number
 * @a:function parameter
 * Return: -a , 0 or a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a >= 0)
	{
		return (a);
	}
	return (0);

=======
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
>>>>>>> aa7b0e1585262394e75c017354ec428c75e1c59e
}
