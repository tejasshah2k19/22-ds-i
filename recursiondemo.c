#include <stdio.h>

void print1(int n)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        printf("\nRoyal");
    }
}

// base case -> break condition
void print(int n)
{
    printf("\nRoyal"); // 1 2 3 4 5 6
    if (n != 1)
    {
        print(n - 1); // 6 5 4 3 2 1
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

void mul(int z)
{
    printf("hi");
}
void sub(int z)
{
    mul(z);
    printf("hi mul");
}
void add(int x)
{
    sub(x);
    printf("hi add");
}
int fact(int n)//4
{

    if (n != 1)
        return n * fact(n - 1); // 5*4*3*2*1;
    else
        return 1;
}

int main()
{
    // print1(7);
    // print(7);
    // printNum(5); // 5 4 3 2 1

    //  printNumRev(5);//1 2 3 4 5
    printf("\n %d ", fact(5));
    // add(5);
    return 0;
}





// multable(5);

// 5*1=5
// 5*2=10
// ...
// 5*10=50
