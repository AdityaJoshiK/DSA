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

void preOrderTraversal(struct node *root)
{
    if (root!=NULL)
    {
        printf("%d ",root->data);
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
    
}

void postOrderTraversal(struct node *root)
{
    if (root!=NULL)
    {
        postOrderTraversal(root->left);
        postOrderTraversal(root->right);
        printf("%d ",root->data);
    }
    
}

void inOrderTraversal(struct node *root)
{
    if (root!=NULL)
    {
        inOrderTraversal(root->left);
        printf("%d ",root->data);
        inOrderTraversal(root->right);
    }
    
}
 
void main()
{
        //     8
        //    / \
        //   6  10
        //  / \ / \
        // 3  7 9 12
    struct node *root=createNode(8);

    struct node *p1=createNode(6);
    struct node *p11=createNode(3);
    struct node *p12=createNode(7);

    p1->left=p11;
    p1->right=p12;

    struct node *p2=createNode(10);
    struct node *p21=createNode(9);
    struct node *p22=createNode(12);

    p2->left=p21;
    p2->right=p22;

    root->left=p1;
    root->right=p2;

    // preOrderTraversal(root);
    // postOrderTraversal(root);
    inOrderTraversal(root);
}