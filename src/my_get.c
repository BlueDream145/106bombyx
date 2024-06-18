/*
** EPITECH PROJECT, 2018
** my_get.c
** File description:
**
*/

#include "bombyx.h"

struct request *get_request(int ac, char **as)
{
	struct request *req = malloc(sizeof(struct request));

	if (req == NULL)
		return (NULL);
	req->n = atoi(as[1]);
	if (ac == 3) {
		req->type = NORMAL;
		req->rate = atof(as[2]);
	}
	if (ac == 4) {
		req->type = GEN;
		req->init_gen = atof(as[2]);
		req->final_gen = atof(as[3]);
	}
	return (req);
}