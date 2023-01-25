#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node *next;        // self ref structure
} *head = NULL, *last = NULL; // empty

void addNode(int);
void display();
void delLast();
void delBeg();
void search();
void addBeg();
void deleteAny();//ask num and delete 
int main()
{
    int choice, num;

    while (1)
    {
        printf("\n0 For Exit\n1 For Add Node\n2 For Display\n3 For DeleteLast\n4 For Del Beg\n5 For Search\n6 For add Beg");
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
        case 3:
            delLast();
            break;
        case 4:
            delBeg();
            break;
        case 5:
            search();
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

void delLast()
{

    struct node *p = head;

    while (p->next != last)
    {
        p = p->next;
    }

    p->next = NULL;
    free(last);
    last = p;
}

void delBeg()
{
    struct node *p = head;
    head = head->next;
    free(p);
}

void search()
{
    int s;
    struct node *p;
    bool isFound = 0; // c99
    printf("\nEnter search num");
    scanf("%d", &s);

    p = head;

    while (p != NULL)
    {
        if (p->data == s)
        {
            isFound = 1;
            break;
        }
        p = p->next;
    }

    isFound == 1 ? printf("\n%d Found", s) : printf("\n%d not Found", s);
}

void addBeg(){
    int num;
    struct node *tmp; 
    printf("\nEnter number");
    scanf("%d",&num);

    tmp = malloc(sizeof(struct node));
    tmp->data = num;
    tmp->next = head; 
    head = tmp ;
}

void deleteAny(){
    
}