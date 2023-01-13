#include<stdio.h>
#include<stdlib.h>

int main(){

     
    
    int x; 
    float y;
    double d; 
    int *p;
    float *t;
    double *dd;

    printf("\n %d ",sizeof(x));//4
    printf("\n %d ",sizeof(y));//4
    printf("\n %d ",sizeof(d));//8
    printf("\n %d ",sizeof(p));//8
    printf("\n %d ",sizeof(t));//8
    printf("\n %d ",sizeof(dd));//8

    
   
    return 0; 
}