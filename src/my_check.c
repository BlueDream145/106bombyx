/*
** EPITECH PROJECT, 2018
** my_check.c
** File description:
**
*/

#include "bombyx.h"

int check_syntax(int ac, char **as)
{
	if (atof(as[1]) <= 0)
		return (FALSE);
	if ((ac == 3) && (check_nbr(as[1]) == FALSE ||
		check_decimal_nbr(as[2]) == FALSE ||
		atof(as[2]) < 1 || atof(as[2]) > 4))
			return (FALSE);
	if ((ac == 4) && (check_nbr(as[1]) == FALSE ||
		check_nbr(as[2]) == FALSE ||
		check_nbr(as[3]) == FALSE ||
		atof(as[1]) <= 0 || atof(as[1]) >= atof(as[2])))
			return (FALSE);
	return (TRUE);
}

int check_decimal_nbr(char *str)
{
	for (int i = 0; i < my_strlen(str); i++) {
		if (!(str[i] >= '0' && str[i] <= '9') &&
			str[i] != '.')
			return (FALSE);
	}
	return (TRUE);
}

int check_nbr(char *str)
{
	for (int i = 0; i < my_strlen(str); i++) {
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (FALSE);
	}
	return (TRUE);
}