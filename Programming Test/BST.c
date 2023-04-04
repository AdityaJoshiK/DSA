#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *create(struct node *head)
{
    struct node *temp = head;
    struct node *save = head;
    struct node *new = (struct node *)malloc(sizeof(struct node *));

    new->data = 2;

    printf("Enter Data:");
    scanf("%d", &new->data);
    new->left = NULL;
    new->right = NULL;

    if (head == NULL)
    {
        printf("Inside IF");
        head = new;
    }

    else
    {

        if (temp->left==NULL)
        {
            temp->left=new;
        }
        else{
            temp->right=new;
        }
        
    }

    // printf("%d\n", new->data);

    return head;
}

void print(struct node *root)
{
        //  struct node *temp = root;
    if (root==NULL)
    {
        return;
    }
    
   printf("%d\n",root->data);
    // if (root->left==NULL && root->right==NULL)
    // {
    //     printf("%d ",root->data);
    // }

    print(root->left);
    print(root->right);
    
}

int main(int argc, char const *argv[])
{
    /*
         6
        / \
       4   8
      / \ / \
     2  3 7  9
    
    */
    struct node *root=NULL;

    // struct node *root = (struct node *)malloc(sizeof(struct node *));
    // struct node *rootl = (struct node *)malloc(sizeof(struct node *));
    // struct node *rootLl= (struct node *)malloc(sizeof(struct node *));
    // struct node *rootLr = (struct node *)malloc(sizeof(struct node *));
    // struct node *rootr = (struct node *)malloc(sizeof(struct node *));
    // struct node *rootRl = (struct node *)malloc(sizeof(struct node *));
    // struct node *rootRr = (struct node *)malloc(sizeof(struct node *));

    // root->data=6;
    // rootl->data=4;
    // rootr->data=8;

    // root->left=rootl;
    // root->right=rootr;

    // rootLl->data=2;
    // rootLr->data=3;

    // rootLl->left=NULL;
    // rootLr->right=NULL;
    // rootRl->left=NULL;
    // rootRr->right=NULL;

    // rootRl->data=7;
    // rootRr->data=9;

    // rootl->left=rootLl;
    // rootl->right=rootLr;
    // rootr->left=rootRl;
    // rootr->right=rootRr;

    printf("\n");

    root=create(root);
    root=create(root);
    root=create(root);
    root=create(root);
    root=create(root);
    root=create(root);
    print(root);
    
        return 0;
}
