#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node* createNode(int data)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));

    n->data=data;
    n->left=NULL;
    n->right=NULL;

    return n;
}
 
void main()
{
    struct node *root=createNode(4);

    struct node *p1=createNode(2);
    struct node *p2=createNode(6);

    root->left=p1;
    root->right=p2;
}