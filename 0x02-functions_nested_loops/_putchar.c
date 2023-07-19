#include <stdio.h>
/**
 * _putchar - writes the character c too stdout
 * Return: On success 1
 * On error, -1 is returned, and errno is set appropriatell.
 */
int _putchar(char c)
{
	        return (write(1, &c, 1));
}
