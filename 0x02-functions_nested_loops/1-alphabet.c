#include "main.h"

/**
<<<<<<< HEAD
 * print_alphabet- function to pribnt alphabet
 * Return:0
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');

=======
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
>>>>>>> aa7b0e1585262394e75c017354ec428c75e1c59e
}
