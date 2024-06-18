/*
** EPITECH PROJECT, 2018
** my_string.c
** File description:
**
*/

#include "bombyx.h"

int my_strlen(const char *str)
{
	int n;

	for (n = 0; str[n]; n++);
	return (n);
}