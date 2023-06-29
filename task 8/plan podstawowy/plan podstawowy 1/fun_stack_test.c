#include <stdio.h>

#include "fun_stack.h"

int main (){
	stos_t  *stos = (stos_t*) malloc(sizeof stos);
	stos->par=0;
	stos->name=NULL;
	stos->kolej=NULL;
	char* funkcja= "cos";
	put_on_fun_stack( 1, funkcja);
	printf("stosunek zagłębień nawiasowych: %d\n", top_of_fun_stack());
	printf("funkcja na stosie: %s\n", get_from_fun_stack());
}
