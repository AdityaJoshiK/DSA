#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int i = 0, j = 0;

void print(struct node *root)
{
    //  struct node *temp = root;
    if (root == NULL)
    {
        return;
    }

    printf("%d ", root->data);
    i++;

    print(root->left);
    print(root->right);
}

struct node *create(struct node *root, int data)
{
    struct node *temp = root;
    struct node *save = root;
    struct node *new = ( struct node *)malloc(sizeof(struct node *));

    new->data = data;

    // printf("Enter Data:");
    // scanf("%d", &new->data);
    new->left = NULL;
    new->right = NULL;

    if (root == NULL)
    {
        // printf("n");
        root = new;
    }

    else if (root->left==NULL)
    {
        // printf("l");
        root->left=new;
    }
    else if (root->right==NULL)
    {
        root->right=new;
    }
    

    else if (root->left != NULL)
    {
        temp=root->left;
        if (temp->left == NULL)
        {
            // printf("tl");
            temp->left = new;
        }
        if (temp->right == NULL)
        {
            temp->right = new;
        }
    }

    else if (root->right != NULL)
    {
        temp=root->right;
        if (temp->left == NULL)
        {
            temp->left = new;
        }
        if (temp->right == NULL)
        {
            temp->right = new;
        }
    }
}

int a[7];

int secondmin(struct node *root)
{
    if (root == NULL)
    {
        return a[1];
    }
    secondmin(root->left);
    printf("%d ", root->data);
    a[j] = root->data;
    j++;
    secondmin(root->right);
}

struct node *c(struct node *root,int data)
{
    root->data=data;
    root->left=NULL;
    root->right=NULL;
    return root;
}

int main(int argc, char const *argv[])
{
    /*
      6
     / \
    4   8
   / \ / \
  2  5 7  9

 */
    // int b[7]={6,4,2,5,8,7,9};
    int e;

    printf("Enter No. Of Elements:");
    scanf("%d",&e);

    int b[e];

    for (int i = 0; i < e; i++)
    {
        printf("Enter %dst:",i+1);
        scanf("%d",&b[i]);
    }


    


    struct node *root = (struct node *)malloc(sizeof(struct node *));
    struct node *rootl = (struct node *)malloc(sizeof(struct node *));
    struct node *rootLl = (struct node *)malloc(sizeof(struct node *));
    struct node *rootLr = (struct node *)malloc(sizeof(struct node *));
    struct node *rootr = (struct node *)malloc(sizeof(struct node *));
    struct node *rootRl = (struct node *)malloc(sizeof(struct node *));
    struct node *rootRr = (struct node *)malloc(sizeof(struct node *));

    root->data = b[0];
    rootl = 4;
    rootr->data = 8;

    root->left = rootl;
    root->right = rootr;

    rootLl->data = 2;
    rootLr->data = 5;

    rootLl->left = NULL;
    rootLr->right = NULL;
    rootRl->left = NULL;
    rootRr->right = NULL;

    rootRl->data = 7;
    rootRr->data = 9;

    rootl->left = rootLl;
    rootl->right = rootLr;
    rootr->left = rootRl;
    rootr->right = rootRr;

    print(root);
    printf("\n");
    // inorderTraversal(root);
    // printf("%d\n",i);
    printf("\nMinimum:%d\n", secondmin(root));

    return 0;
}
