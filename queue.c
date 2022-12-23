#include <stdio.h>
#include <stdlib.h>

#define S 5

int q[S];
int front = -1;
int rear = -1; // empty
int isFull()
{
    return rear == S - 1;
}

int isEmpty()
{
    return rear == -1;
}

void insert(int num)
{

    if (isFull())
    {
        printf("\nQ is full");
    }
    else
    {
        rear++;
        q[rear] = num;
        if (front == -1)
        {
            front = 0;
        }
    }
}

void display()
{
    int i;
    if (isEmpty())
    {
        printf("\nQ is Empty");
    }
    else
    {
        for (i = front; i <= rear; i++)
        {
            printf("   %d", q[i]);
        }
    }
}

int delete()
{
    int num = -1;
    if (isEmpty())
    {
        printf("\nQ is Empty");
    }
    else
    {
        num = q[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            front++;
        }
        printf("\n%d is removed..", num);
    }
    return num;
}

int main()
{
    int choice;
    int num;

    while (-1)
    {
        printf("\n0 For Exit\n1 For Insert\n2 For Delete\n3 For Display\nEnter your choice...");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter value");
            scanf("%d", &num);
            insert(num);
            break;
        case 2:
            delete ();
            break;
        case 3:
            display();
            break;
        default:
            break;
        }
    }
    return 0;
}