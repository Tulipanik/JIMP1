#include "insort.h"

void
insort (double v[], int n)
{
  int i, j;
  for (i = 1; i < n; i++) {
    double tmp = v[i];
    for (j = n-1; v[j] < tmp; j--){
      v[j+1] = v[j];
        v[j] = tmp;
    }
  }
}
