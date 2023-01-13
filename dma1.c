#include<stdio.h>
#include<stdlib.h>

int main(){

    int j; //int*
    double t;//
    int i; 
    void *o;
    int *arr;
    int *a; 
    float *x;
    
    a = (int*)   malloc(sizeof(int)); //void*  
    x = (float*) malloc(sizeof(float)); 

    printf("\nEnter value");
   // scanf("%d",&a);//a
    //printf("\n%d",a);//*a
    
    arr = (int*) malloc(5*sizeof(int));//|___|___|____|____|____|
 
    printf("\narr size = %d ",sizeof(arr));
    
    for(i=0;i<5;i++){
        arr[i] = i+2;
    }
    for(i=0;i<5;i++){
        printf("\n%d",arr[i]);
    }
    

    return 0; 
}