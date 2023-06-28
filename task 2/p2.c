#include <stdio.h>

void usun_ujemne(double *v, int *n)
{
        int		j=0;
	double		u[10];
	int		i;
        for(i=0;i<=*n;i++){
                if (v[i] >= 0){
			u[j]=v[i];
			j++;
		}
	}
	*n=j-1;
	while(j--){
		v[j]=u[j];
	}
}
void pwekt(double *v, int n)
{
        printf("[ ");
        while (n--) {
     	   printf("%g ", *v);
                v++;
        }
        printf("]");
}

int main()
{
        double          v[] = {-10, 0, 10, -20, 30, 1.1, -2.2, -3.3, 300.003, 1024.5};
        int             n = sizeof v / sizeof v[0];

        printf("Wektor: ");
        pwekt(v, n);
        printf(" (%d elementow)\n", n);

	usun_ujemne(v,&n);

	printf("Wektor po usunieciu ujemnych elementow: ");
        pwekt(v,n);
        printf(" (%d elementow)\n", n);

        return 0;
}
