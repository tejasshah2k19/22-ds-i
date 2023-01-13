#include<stdio.h>
#include<stdlib.h>

int main(){
 
    int i; 
  
    int *arr;
    int *a; 
    float *x;
    
    a = (int*)   malloc(sizeof(int)); //  
    x = (float*) malloc(sizeof(float)); 

    //default -> 0 
    arr = (int*) calloc(5,sizeof(int));//|___|___|____|____|____|
    //|_____|___________|__________________________|______|
    printf("\narr size = %d ",sizeof(arr));
    
    for(i=0;i<5;i++){
        arr[i] = i+2;
    }
    for(i=0;i<5;i++){
        printf("\n%d",arr[i]);
    }
    

    return 0; 
}