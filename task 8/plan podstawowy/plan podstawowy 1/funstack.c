#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#include "fun_stack.h"

stos_t * stos = NULL;

int top_of_fun_stack(void){
	if (stos==NULL){
		fprintf(stderr, "stos jest pusty!");
		return 0;
	}
	return stos->par;
}

void put_on_fun_stack(int par_level, char *funame){
	stos_t *czas = malloc(sizeof(stos_t*));
	czas->par = par_level;
	czas->name=funame;
	stos_t*pierwszy= stos;
	stos=czas;
	czas->kolej=pierwszy;
}

char *get_from_fun_stack(void){
	if(stos==NULL){
		fprintf(stderr, "Stos jest pusty");
		return NULL;
	}
	stos_t *pierwszy=stos;
	stos_t *drugi = pierwszy->kolej;

	free(pierwszy);
	return stos->name;
}
