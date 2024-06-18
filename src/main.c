/*
** EPITECH PROJECT, 2017
** main.c
** File description:
**
*/

#include "bombyx.h"

int main(int ac, char **as)
{
	struct request *req;

	if (ac == 2 && ((my_strlen(as[1]) == 1 && as[1][0] == 'h') ||
		(my_strlen(as[1]) == 2 && as[1][1] == 'h'))) {
		get_help();
		return (SUCCESS);
	}
	if ((ac != 3 && ac != 4) || check_syntax(ac, as) == FALSE)
		return (FAIL);
	req = get_request(ac, as);
	if (req == NULL)
		return (FAIL);
	process(req);
	return (SUCCESS);
}

void get_help(void)
{
	const char *usage = "USAGE\n"
		"           ./106bombyx n [k | i0 i1]\n\n";
	const char *description = "DESCRIPTION\n"
		"           n   number of first generation individuals\n"
		"           k   growth rate from 1 to 4\n"
		"           i0  initial generation (included)\n"
		"           i1  final generation (included)\n";

	printf(usage);
	printf(description);
}