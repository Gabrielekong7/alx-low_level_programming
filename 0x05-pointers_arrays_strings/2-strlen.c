#include "main.h"

/**
 * _strlen -function that returns the length of a string
 *
 * @s: string
 * Return: lenght
 */

int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\n')
	{
		longi++;
		s++;
	}

	return (0);
}

