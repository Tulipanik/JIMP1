#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct stos{
	int par;
	char* name;
	struct stos *kolej;
} stos_t;

void put_on_fun_stack( int par_level, char *funame);

char *get_from_fun_stack(void);

int top_of_fun_stack(void);


