#include <stdio.h>
#include <stdlib.h>
// 4
// 30
// 8

struct student
{
    int rollNum;
    char name[30];
    double perc;
};

int main()
{
    struct student *p; //->arrow
    struct student s;  // normal member -> using dot

    // malloc does not have default value...
    p = (struct student *)malloc(sizeof(struct student)); //|____|___________________________|____________|

    printf("\nEnter name rolllnum");
    scanf("%s%d", &p->name, &p->rollNum); // normal member dot operator

    return 0;
}