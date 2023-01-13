#include <stdio.h>

void mulTable(int num,int i){
    
    printf("\n%d * %d = %d",num,i,num*i);
    if(i<10){
        mulTable(num,i+1);
    }
} 
 
void printNum(int n)
{
    printf(" %d ", n); // 5
    if (n != 1)
        printNum(n - 1); // 4 3 2 1
}

void printNumRev(int n) // 5
{

    if (n != 1)
        printNumRev(n - 1); //
    printf(" %d ", n);      // pf(5) pf(4) pf(3) pf(2) pf(1)
}
 
 
int main()
{

    // printNum(5);
    printNumRev(5);
    mulTable(5,1); 
    return 0;
}





// multable(5);

// 5*1=5
// 5*2=10
// ...
// 5*10=50
