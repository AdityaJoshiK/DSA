#include<stdio.h>
#include<malloc.h>

struct node
{
    int data;
    struct node *link;
};

void traversal(struct node *ptr)
{
    while (ptr!=NULL)
    {
        printf("%d ",ptr->data);
        ptr=ptr->link;
    }
    
}

struct node *create()
{
    int c=1;

    struct node *head=NULL;
    struct node *ptr=head;

    while (c!=0)
    {
        struct node *new=(struct node *)malloc(sizeof(struct node));

        printf("Enter Info:");
        scanf("%d",&new->data);
        new->link=NULL;

        if (head==NULL)
        {
            head=new;
            ptr=new;
            head=ptr=new;
        }
        else{
            ptr->link=new;
            ptr=new;
        }

        printf("Continue?");
        scanf("%d",&c);
        
    }
    return head;    
    
}

 
void main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;

    // first=(struct node*)malloc(sizeof(struct node));
    // second=(struct node*)malloc(sizeof(struct node));
    // third=(struct node*)malloc(sizeof(struct node));

    head=create();

    // first->data=1;
    // first->link=second;

    // second->data=2;
    // second->link=third;

    // third->data=3;
    // third->link=NULL;

    traversal(head);
}