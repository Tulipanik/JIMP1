#include <stdio.h>
#include <math.h>
double
maxx(double* a,int n){
	double		sum;
	double		max;
	int		i;
	for(i=0;i<n;i++){
		if(a[i]>max){
			max=a[i];
		}
		if(i%2==0){
			sum+=a[i];
		}
	}
	printf("Największa liczba to:%f\n",max);
	printf("Suma liczb na pozycjach parzystych to:%f\n",sum);
	return 1;
}

int
main(int argc, char *argv[])
{
        FILE           *in = argc > 1 ? fopen(argv[1], "r") : stdin;

        if (in != NULL) {
                double          x;
                int             n = 0;
		double		tab[1000];

                while (fscanf(in, "%lf", &x) == 1) {
			tab[n]=x;
			n++;
                }
		maxx(tab,n);

                fclose(in);
                return 0;
        } else
                return 1;
}
