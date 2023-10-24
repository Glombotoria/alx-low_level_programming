#include "main.h"

/**
<<<<<<< HEAD
 * _isalpha -  checks if c is lowercase or uppercase
 * Return: 1 or 0
 * @c: is the parameter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
=======
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
>>>>>>> aa7b0e1585262394e75c017354ec428c75e1c59e
}
