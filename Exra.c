#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void print(struct node *n)
{
    while (n!=NULL)
    {
        printf("%d ",n->data);
        n=n->link;
    }

    printf("\n");
    
}



//4,5,6,7,8,9

void main()
{
    struct node *head;

    struct node *first=(struct node*)malloc(sizeof(struct node));
    struct node *second=(struct node*)malloc(sizeof(struct node));
    struct node *third=(struct node*)malloc(sizeof(struct node));
    struct node *fourth=(struct node*)malloc(sizeof(struct node));

    head=first;

    first->data=4;
    first->link=second;

    second->data=5;
    second->link=third;

    third->data=6;
    third->link=fourth;

    fourth->data=7;
    fourth->link=NULL;
    
    print(head);
}