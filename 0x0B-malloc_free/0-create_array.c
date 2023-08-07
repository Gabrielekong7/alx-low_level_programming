#include "main.h"
#include <stdlib.h>
/**
 *  create_array - creates an array of char c
 *  @size: size of array
 *  @Description: creat array of size and assign char c
 *  @c: char to assign
 *  return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c);
{
	char *str;

	unsighned int i;

	str = malloc(sizeof(char) * size);
	if (NULL == 0 || str == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
