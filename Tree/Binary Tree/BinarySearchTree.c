//properties
// 1-left are lesser
// 2.right are greater
// 3.left & right subtree should be BST
// 4.no duplicate nodes
//5.inorder traversal of BST gives ascendng sorted array(IMP)

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

//check Binary Tree Is BST(same as Inorder Traversal)
int isBST(struct node *root)
{
    static struct node *prev=NULL;
    if (root!=NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }

        if (prev!=NULL && root->data<=prev->data)
        {
            return 0;
        }
        prev=root;
        return isBST(root->right);
    }
    
    else{
        return 1;
    }
}

struct node* createNode(int data)
{
    struct node *n=(struct node*)malloc(sizeof(struct node));

    n->data=data;
    n->left=NULL;
    n->right=NULL;

    return n;
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

//another approach for creation(easy)
void createNodeNew(struct node** root, int key)
{
    struct node* prev = NULL;
    struct node* curr = *root;

    while (curr != NULL)
    {
        prev = curr;

        if (key == curr->data)
        {
            printf("Error! Duplicate Not allowed In BST");
            return;
        }
        else if (key < curr->data)
        {
            curr = curr->left;
        }
        else
        {
            curr = curr->right;
        }
    }

    struct node* new = createNode(key);
    
    if (*root == NULL)
    {
        *root = new;
    }
    else if (key < prev->data)
    {
        prev->left = new;
    }
    else
    {
        prev->right = new;
    }  
}

//another approach for search
int searchBST(struct node *root, int key) {
    if (root == NULL) {
        return 0;
    }
    
    if (key < root->data) {
        return searchBST(root->left, key);
    } else if (key > root->data) {
        return searchBST(root->right, key);
    } else {
        return 1;
    }
}

int search(struct node *root,int key)
{
    if (root==NULL)
    {
        return 0;
    }
    
    if (key==root->data)
    {
        return 1;
    }

    else if (root->data>key)
    {
        return search(root->left,key);
    }

    else{
        return search(root->right,key);
    }
    
}

int searchIterative(struct node *root,int key)
{
    while (root!=NULL)
    {
        if (root->data==key)
        {
            return 1;
        }

        else if (key<root->data)
        {
            root=root->left;
        }
        
        else{
            root=root->right;
        }
    }
    return 0;
}

void insert(struct node *root,int key)
{
    struct node* prev=NULL;

    while (root!=NULL)
    {
        prev=root;

        if (key==root->data)
        {
            printf("Error!Duplicate Not allowed In BST");
            return;
        }
        else if (key<root->data)
        {
            root=root->left;
        }
        else{
            root=root->right;
        }
        
    }
    struct node *new=createNode(key);
    
    if (key<prev->data)
    {
        prev->left=new;
    }
    else{
        prev->right=new;
    }  
}

//BST Deletion-3 cases
//1)Node is leaf node
//2)node is not leaf node
//3)node is root node or in b/w BST
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

    //createnode using another approach
    // struct node *root=createNode(8);
    // createNodeNew(&root,6);
    // createNodeNew(&root,7);
    // createNodeNew(&root,8);
    // createNodeNew(&root,9);

    inOrderTraversal(root);
    if (isBST(root))
    {
        printf("\nTrue");
    }
    else{printf("False");}

    if (search(root,10))
    {
        printf("\nTrue");
    }
    else{printf("False");}

    if (searchIterative(root,10))
    {
        printf("\nTrue");
    }
    else{printf("False");}

    insert(root,11);
    printf("%d\n",p22->left->data);
    inOrderTraversal(root);
}