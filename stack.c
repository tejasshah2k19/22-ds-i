#include <stdio.h>
#include<stdlib.h>

#define S 5

int stack[S];
int top = -1;

int isEmpty()
{
    return top == -1; // 1 0
}
int isFull()
{
    return top == S - 1;
}
void push(int num)
{
    if (isFull())
    {
        printf("\nStack Overflow...");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}

int pop()
{
    int num = -1;
    if (isEmpty())
    {
        printf("\nStack UnderFlow...");
    }
    else
    {
        num = stack[top];
        printf("\n%d poped..", num);
        top--;
    }

    return num;
}

void display()
{
    if (isEmpty())
    {
        printf("\nStack UnderFlow...");
    }
    else
    {
        for (int i = top; i >= 0; i--)
        {
            printf("\n%d", stack[i]);
        }
    }
}

int peek(){
    if(isEmpty()){
        return -1;
    }else{
        printf("\n%d ",stack[top]);
        return stack[top];
    }
}

int peep(int location){
     int index; 
     index = top - location + 1;
    if(index < 0 ){
        printf("\nInvalid Location...");
        return -1;
    }
    printf("\n%d",stack[index]);
    return stack[index];

}
int main()
{
    int choice;
    int num;
    int location;
    while (-1) // 0-> false  num->true
    {
        printf("\n0 For Exit\n1 For PUSH\n2 For POP\n3 For Display\n4 For PEEk\n5 For PEEP\nEnter your Choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
          
            printf("\nEnter number");
            scanf("%d", &num);
            push(num);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 3+1:
            peek();
            break;
        case 5:
            printf("\nEnter location");
            scanf("%d",&location);
            peep(location);
            break;
        default:
            printf("\nInvalid choice PTA");
            break;
        }
    }
    return 0;
}