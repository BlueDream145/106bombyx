/*
** EPITECH PROJECT, 2017
** file.h
** File description:
**
*/

#ifndef bombyx_
#define bombyx_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define SUCCESS (0)
#define FAIL (84)
#define TRUE (1)
#define FALSE (0)

struct request {
	int type;
	double n;
	double rate;
	double init_gen;
	double final_gen;
};

enum type {
	NORMAL,
	GEN
};

// main.c
void get_help(void);

// my_check.c
int check_syntax(int ac, char **as);
int check_decimal_nbr(char *str);
int check_nbr(char *str);

// my_engine.c
void process(struct request *req);
void process_normal(struct request *req);
void process_gen(struct request *req);

// my_get.c
struct request *get_request(int ac, char **as);

// my_string.c
int my_strlen(const char *str);

#endif /* bombyx */