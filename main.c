#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1;
    int A=500000, M=1000000;
    while(A<M){
        A=A+A*0.08;
        M+=50000;
        i++;
    }
    printf(" les annees de la population de la ville Agadir d�passera celle de la ville Marrakech : %d",i);
    return 0;
}
