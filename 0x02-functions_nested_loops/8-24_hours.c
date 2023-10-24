#include "main.h"

/**
<<<<<<< HEAD
 * jack_bauer - prints every minute and hour of the day
 * Return: void
 */

=======
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
>>>>>>> aa7b0e1585262394e75c017354ec428c75e1c59e
void jack_bauer(void)
{
	int i, j;

<<<<<<< HEAD
	for (i = 0 ; i < 24 ; i++)
	{
		for (j = 0 ; j < 60 ; j++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(':');
			_putchar(j / 10 + '0');
			_putchar(j % 10 + '0');
			_putchar('\n');
		}
=======
	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
>>>>>>> aa7b0e1585262394e75c017354ec428c75e1c59e
	}
}
