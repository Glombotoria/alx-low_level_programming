#include "main.h"
<<<<<<< HEAD
/**
 *  _islower - checks if a character is lowercase
 *  Return:1 or 0
 *  @c: is the parameter
=======

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
>>>>>>> aa7b0e1585262394e75c017354ec428c75e1c59e
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
