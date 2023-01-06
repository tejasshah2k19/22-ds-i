#include <stdio.h>

int main()
{

    int a[] = {11, 22, 33, 44, 55};
    int b[] = {5, 15, 21, 27, 40};

    int size1 = sizeof(a) / sizeof(int);
    int size2 = sizeof(b) / sizeof(int);
    int size3 = size1 + size2;
    int c[200];
    int i = 0, j = 0, k = 0;

    while (i < size1 && j < size2)
    {
        if (a[i] < b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }

    while(i<size1){
        c[k++] = a[i++];
    }
    while(j<size2){
        c[k++] = b[j++];
    }

    printf("\nArray \n");
    for(i=0;i<size3;i++){
        printf(" %d",c[i]);
    }
    return 0;
}