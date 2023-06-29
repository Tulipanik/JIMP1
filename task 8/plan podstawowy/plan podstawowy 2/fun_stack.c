#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fun_stack.h"


void put_on_fun_stack(int par_level, char *funame){
	stos_t *czas = (stos_t*) malloc(sizeof(stos_t*));
	czas->name = (char*) malloc(sizeof(char) * (strlen(funame) + 1));

	czas->par = par_level;
	strcpy(czas->name, funame);
	czas->kolej = obecny;
	obecny = czas;
}

char *get_from_fun_stack(void){
	stos_t *czas;
	czas = obecny;
	obecny = czas->kolej;
	return czas ->name;
}

int top_of_fun_stack(void){
	return obecny->par;
}


