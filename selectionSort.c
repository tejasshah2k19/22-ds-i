#include <stdio.h>

int main()
{
    int a[] = {15,21,7,45,6,78,9,25,3,10}; // 9*4

    // int a[] = {5,4,3,2,1};
    // int a[] = {24,25,19,71,65};
    //int a[] = {1, 2, 3, 4, 5};
    int j, tmp, i, x,min;
    int size = sizeof(a) / sizeof(int);
    printf("\ntotal elements in the array => %d", size);
    // 0 1 2 3 4 5 6 7 8 9

    printf("\nArray Before Sort\n");
    for (i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }

    for(i=0;i<size;i++){
        for(j=i+1,min=i;j<size;j++){
            if(a[min] > a[j]){
                min = j ; 
            }
        }
        //swap 
        if( min != i ){
           tmp = a[min];
           a[min] = a[i];
           a[i] =tmp;     
        }
        //

    }
    
    
    printf("\nArray After Sort\n");
    for (i = 0; i < size; i++)
    {
        printf(" %d", a[i]);
    }

    return 0;
}