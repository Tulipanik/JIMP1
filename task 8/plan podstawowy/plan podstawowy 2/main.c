#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "fun_stack.h"
//#include "alex.h"
//#include "parser.h"

//#define MAXINDENTLENGHT 256 

// max liczba elementow w tablicy
#define ME 3 
#define TL 64


int main ()
{
int liczby[ME] = {5, 7, 9};
char test[ME][TL] =
{
	{"lubie"},
	{"placki"},
	{"ziemniaczane"}
};

int i;

for (i=0; i < ME; i++)
	{
	put_on_fun_stack (liczby[i], test [i]);
	printf ("Element %d: liczba: %d tekst: %s\n",i,liczby[i],test[i]);
	}

int j;

for (j=0; j < ME; j++)
	{
	liczby[j]=top_of_fun_stack();
	strcpy (test[j],get_from_fun_stack());
	printf ("Element %d: liczba: %d tekst: %s\n",j,liczby[j],test[j]);
	}
}
 
