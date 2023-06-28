#include "calnum.h"


double calnum ( double (*f)( double ), double a, double b, int n ){
	double		h=(b-a)/n;
	double		calka=0;
	double		i=0;
	double		p=0;
	double		s=0;
	double		k=0;
	while(--n){
		p=f(a+(i*h));
		s= f(a+(i+0.5)*h);
		k= f(a+((i+1)*h));
		calka+=(h*(p+(4*s)+k))/6;
		i++;
	}
	return calka;
}

