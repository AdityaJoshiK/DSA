#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *prev;
    struct node *next;
};

void traversal(struct node *head);

struct node *create(void);
struct node *insertAtFirst(struct node *head);
struct node *insretAtEnd(struct node *head);
struct node *insertAfterNode(struct node *head, struct node *p);
struct node *insertAtIndex(int index, struct node *head);
void insertBeforeNode(struct node *m);//or insertAtMiddle in ppt

struct node *deleteAtFirst(struct node *head);
struct node *deleteAtLast(struct node *head);
struct node *deleteAtIndex(int index,struct node *head,struct node *tail);

void main()
{
    struct node *head,*tail;
    struct node *first=(struct node *)malloc(sizeof(struct node));
    struct node *second=(struct node *)malloc(sizeof(struct node));
    struct node *third=(struct node *)malloc(sizeof(struct node));
    struct node *fourth=(struct node *)malloc(sizeof(struct node));

    head=first;

    first->prev=NULL;
    first->info=1;
    first->next=second;

    second->prev=first;
    second->info=2;
    second->next=third;

    third->prev=second;
    third->info=3;
    third->next=fourth;

    fourth->prev=third;
    fourth->info=4;
    fourth->next=NULL;
    
    tail=fourth;

    // struct node *head = create();
    traversal(head);
    // head = insertAtFirst(head);
    // head = insretAtEnd(head);
    // head=insertAfterNode(head,second);
    // head=insertAtIndex(3,head);
    // head = deleteAtFirst(head);
    // head=deleteAtLast(head);
    // insertBeforeNode(fourth);
    head=deleteAtIndex(4,head,tail);//XwrongX
    traversal(head);
}

struct node *create(void)
{
    int choice = 1;

    struct node *head = NULL, *ptr = head;

    while (choice != 0)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));

        printf("Enter Info:");
        scanf("%d", &new->info);

        new->prev = NULL;
        new->next = NULL;

        if (head == NULL)
        {
            head = ptr = new;
        }
        else
        {
            ptr->next = new;
            new->prev = ptr;
            ptr = new;
        }
        printf("Do Ypu Want TO Continue(0,1):");
        scanf("%d", &choice);
    }

    return head;
}

void traversal(struct node *head)
{
    struct node *ptr = head;

    while (ptr->next != NULL)
    {
        printf("Element:%d\n", ptr->info);
        ptr = ptr->next;
    }

    printf("Element:%d\n", ptr->info);
    printf("\n");

    /*print reverse
    while (ptr!=NULL)
    {
        printf("Element:%d\n",ptr->info);
        ptr=ptr->prev;
    }*/
}

struct node *insertAtFirst(struct node *head)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d", &new->info);

    new->prev = NULL;
    new->next = head;

    head = new;

    return head;
}

struct node *insretAtEnd(struct node *head)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d", &new->info);

    struct node *ptr = head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    new->next = NULL;
    ptr->next = new;

    return head;
}

struct node *insertAfterNode(struct node *head, struct node *p)
{
    struct node *ptr = head;

    while (ptr != p)
    {
        ptr = ptr->next;
    }

    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d", &new->info);

    new->next = ptr->next;
    ptr->next = new;

    return head;
}

struct node *insertAtIndex(int index, struct node *head)
{
    int i = 1;

    struct node *ptr = head;

    while (i != index - 1)
    {
        ptr = ptr->next;
        i++;
    }

    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d", &new->info);

    new->next = ptr->next;
    ptr->next = new;

    return head;
}

struct node *deleteAtFirst(struct node *head)
{
    struct node *ptr = head;

    head = ptr->next;
    head->prev = NULL;

    free(ptr);

    return head;
}

void insertBeforeNode(struct node *m)
{
    //in this not given head address
    
    struct node *new=(struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d",&new->info);

    (m->prev)->next=new;
    new->prev=m->prev;
    new->next=m;
    m->prev=new;


}

struct node *deleteAtLast(struct node *head)
{
    struct node *ptr = head->next;
    struct node *p = head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        p = p->next;
    }

    p->next = NULL;
    free(ptr);
    return head;
}

struct node *deleteAtIndex(int index,struct node *head,struct node *tail)
{
    int i=1;

    if (index==1)
    {
        deleteAtFirst(head);
    }
    
    else{
    struct node *ptr=head;

    while (i!=index)
    {
        ptr=ptr->next;
        i++;
    }

    if (ptr==tail)
    {
        deleteAtLast(head);
    }
    
    else{
   (ptr->prev)->next=ptr->next;
   (ptr->next)->prev=ptr->prev;

    free(ptr);

    return head;
    }
    }
}