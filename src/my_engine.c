/*
** EPITECH PROJECT, 2018
** my_engine.c
** File description:
**
*/

#include "bombyx.h"

void process(struct request *req)
{
	if (req->type == NORMAL)
		process_normal(req);
	if (req->type == GEN)
		process_gen(req);
}

void process_normal(struct request *req)
{
	double x = req->n;

	for (int i = 1; i <= 100; i++) {
		printf("%d %.2f\n", i, x);
		x = req->rate * x * ((1000 - x) / 1000);
	}
}

void process_gen(struct request *req)
{
	double k = 1;
	double x = req->n;

	for (k = 1; k <= 4; k += 0.01) {
		for (int i = 1; i <= req->final_gen; i++) {
			while (i < req->init_gen) {
				x = k * x * ((1000 - x) / 1000);
				i++;
			}
			x = k * x * ((1000 - x) / 1000);
			printf("%.2f %.2f\n", k, x);
		}
	}
}