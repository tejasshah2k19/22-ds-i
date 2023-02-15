#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node *next,*prev;        // self ref structure
} *head = NULL, *last = NULL; // empty


 struct node* createNode(int num); // [num | Null ]
void addNode(int);
void display();
void delLast();
void delBeg();
void search();
void addBeg();
void deleteAny();//ask num and delete 
void insertAnyAfter();

int main()
{
    int choice, num;

    while (1)
    {
        printf("\n0 For Exit\n1 For Add Node\n2 For Display\n3 For DeleteLast\n4 For Del Beg\n5 For Search\n6 For add Beg\n7 For inser Any After\n");
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
        case 7:
            insertAnyAfter();
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
        head =  createNode(num);
        //head->data = num; // .  | struct pointer arrow ->
        //head->next = NULL;
        last = head;
    }
    else
    {
        tmp = createNode(num);
        last->next = tmp;
        tmp->prev = last; 
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

    tmp = createNode(num);
    tmp->next = head; 
    head->prev = tmp;
    
    head = tmp ;
}

void deleteAny(){

}

 struct node* createNode(int num){
    struct node *tmp; 
    tmp = malloc(sizeof(struct node));
    tmp->data = num;
    tmp->next = NULL;
    tmp->prev = NULL;
    return tmp;
}

void insertAnyAfter(){
    int source,num,isFound=0;
    struct  node *p = head,*tmp;
    
    printf("\nEnter source node");
    scanf("%d",&source);

    while(p != NULL){
        if(p->data == source){
            isFound = 1;
            break;
        }   
        p = p->next; 
    }

    if(isFound == 1){
        printf("\nEnter data");
        scanf("%d",&num);
        tmp = createNode(num);
        tmp->next = p->next;
        p->next = tmp; 
    }else{
        printf("\nInvalid Source PTA");
    }




}