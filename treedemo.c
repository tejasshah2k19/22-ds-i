#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
} *root = NULL;

struct node *createNode(int num)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = num;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

struct node *addNode(struct node *root, int num) // 50,150
{                                                // root50 100 |
    if (root == NULL)
    {
        root = createNode(num);
        return root;
    }
    else
    {
        // 150  > 50
        if (num > root->data)
        {
            root->right = addNode(root->right, num);
        }
        else
        {
            root->left = addNode(root->left, num);
        }
    }
    return root;
}

void inOrder(struct node *root)
{
    if (root != NULL)
    {
        inOrder(root->left);
        printf(" %d ", root->data);
        inOrder(root->right);
    }
}

void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf(" %d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node *root){
    if(root!=NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf(" %d ", root->data);        
    }
}


int main()
{

    root = addNode(root, 50);
    addNode(root, 100);
    addNode(root, 40);
    addNode(root, 150);
    addNode(root, 75);
    addNode(root, 45);
    addNode(root, 35);

    // printf("\n%d",root->data);//50
    // printf("\n%d",root->left->data);//40
    // printf("\n%d",root->right->data);//100
    // printf("\n%d",root->right->right->data);//150

    // TreeTravel

    // inOrder ->  left-root-right
    // preOrder -> root-left-right
    // postOrder ->  left-right-root
    //inOrder(root);
    // preOrder(root);
    postOrder(root);
    return 0;
}