#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 20

int main(){

    int i=0;
    double vt[N];
    double *puntero;
    puntero=vt;

    while (i<N)
    {
        *puntero=1+rand()%100;
        printf("%p", *puntero);
        printf("\n");
        puntero++;
    }
    
    return 0;
}