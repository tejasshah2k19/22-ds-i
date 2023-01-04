#include<stdio.h>

int main(){
    // int a[] = {15,21,7,45,6,78,9,25,3,10}; // 9*4 

   // int a[] = {5,4,3,2,1};
    // int a[] = {24,25,19,71,65};
    int a[] = {1,2,3,4,5};
    int j,tmp,i,x,sorted=0; 
    int size = sizeof(a)/sizeof(int); 
    printf("\ntotal elements in the array => %d",size);
    // 0 1 2 3 4 5 6 7 8 9 

    printf("\nArray Before Sort\n");
    for(i=0;i<size;i++){
        printf(" %d",a[i]);
    }

  for(i=0;i<size-1 && sorted == 0 ;i++){ //i<10 [ 9 ]    
    sorted = 1; 
    for(j=0;j<size-1;j++){
        if(a[j] > a[j+1]){
            tmp = a[j];
            a[j] = a[j+1];
            a[j+1] = tmp;
            sorted=0;
        }
    }
    printf("\nPass %d\n",i+1);
    for(x=0;x<size;x++){
        printf(" %d",a[x]);
    }
  }

    printf("\nArray After Sort\n");
    for(i=0;i<size;i++){
        printf(" %d",a[i]);
    }


    return 0;
}