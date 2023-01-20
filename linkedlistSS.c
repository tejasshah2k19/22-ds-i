#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;        // self ref structure
} *head = NULL, *last = NULL; // empty

void addNode(int);
void display();

int main()
{
    int choice, num;

    while (1)
    {
        printf("\n0 For Exit\n1 For Add Node\n2 For Display");
        printf("\nEnter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            printf("\nEnter number");
            scanf("%d", &num); // 10 20
            addNode(num);
            break;
        case 2:
            display();
            break;
        default:
            printf("\nPTA");
            break;
        }
    }
    return 0;
}

void addNode(int num)
{ // 10 20 30
    struct node *tmp;
    if (head == NULL)
    {
        head = (struct node *)malloc(sizeof(struct node));
        head->data = num; // .  | struct pointer arrow ->
        head->next = NULL;
        last = head;
    }
    else
    {
        tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = num;
        tmp->next = NULL;
        last->next = tmp;
        last = tmp;
    }
}

void display()
{
    struct node *p;
    if (head == NULL)
    {
        printf("\nList is Empty");
    }
    else
    {
        p = head;
        while (p != NULL)
        {
            printf(" %d ", p->data); // 10  20 30
            p = p->next;
        } // p->last , p->last == NULL ,
          // p == NULL
          // p->next == NULL
          // p!=NULL
    }
}
