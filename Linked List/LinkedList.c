#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};


void travarsal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element:%d\n", ptr->info);
        ptr = ptr->link;
    }
}

int countNodes(struct node *head)
{
    struct node *ptr = head;

    int count = 0;

    if (head == NULL)
    {
        return count;
    }
    else
    {
        while (ptr != NULL)
        {
            ptr = ptr->link;
            count++;
        }
        return count;
    }
}

struct node *createLinkedList()
{
    int choice = 1;

    struct node *head = NULL;
    struct node *ptr = head;

    while (choice != 0)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter Info:");
        scanf("%d", &newnode->info);
        newnode->link = NULL;

        if (head == NULL)
        {
            head = ptr = newnode;
        }
        else
        {
            ptr->link = newnode;
            ptr = newnode;
        }
        printf("Do You Want To Add New Node(0,1):");
        scanf("%d", &choice);
    }
    return head;
}

struct node *insertatbeginning(struct node *head)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d", &new->info);

    new->link = head;
    head = new;

    return head;
}

struct node *insertatindex(int index, struct node *head)
{
    struct node *save = head;

    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter INfo:");
    scanf("%d", &new->info);

    int i = 0;

    while (i != index - 1)
    {
        save = save->link;
        i++;
    }

    new->link = save->link;
    save->link = new;

    return head;
}

struct node *insertafternode(struct node *head, struct node *p)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d", &new->info);

    new->link = p->link;
    p->link = new;

    return head;
}

struct node *insertionatend(struct node *head)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d", &new->info);

    struct node *save = head;

    while (save->link != NULL)
    {
        save = save->link;
    }
    save->link = new;
    new->link = NULL;

    return head;
}

struct node *deletenodeatfirst(struct node *head)
{
    struct node *ptr = head;

    head = ptr->link;

    free(ptr);

    return head;
}

struct node *deleteatend(struct node *head)
{
    struct node *p = head;
    struct node *save = head->link;

    while (save->link != NULL)
    {
        p = p->link;
        save = save->link;
    }
    p->link = NULL;
    free(save);

    return head;
}

struct node *deleteatindex(struct node *head, int index)
{
    struct node *save = head->link;
    struct node *p = head;

    int i = 0;

    while (i != index - 1)
    {
        p = p->link;
        save = save->link;
        i++;
    }

    p->link = save->link;

    free(save);

    return head;
}

struct node *deletenodeatgivenvalue(struct node *head, int value)
{
    struct node *save = head;
    struct node *p = head->link;

    while (p->info != value && p->link != NULL)
    {
        save = save->link;
        p = p->link;
    }

    while (p->info == value)
    {
        save->link = p->link;
        free(p);
    }

    return head;
}

void copy(struct node *p)
{
    struct node *ptr = p->link;
    struct node *new = (struct node *)malloc(sizeof(struct node));
    struct node *head = new;
    head->info = p->info;

    struct node *save = head;

    while (ptr != NULL)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));

        new->info = ptr->info;
        save->link = new;
        save = new;

        ptr = ptr->link;
    }

    save->link = NULL;

    travarsal(head);
}

struct node *insertInOrderedLinkedList(struct node *head)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d", &new->info);

    struct node *save = head;

    if (new->info <= head->info)
    {
        new->link = head;
        head = new;

        return head;
    }

    while (save->link!=NULL && new->info>=(save->link)->info)
    {
        save=save->link;
    }

    new->link=save->link;
    save->link=new;

    return head;
    
}

/*struct node *insertInOrderedLinkedList(struct node *head) -->My Way
{
    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d", &new->info);

    struct node *ptr = head->link;
    struct node *p=head;

    if (new->info <= head->info)
    {
        new->link = head;
        head = new;

        return head;
    }

    int i=0;
    while (ptr != NULL && new->info >= ptr->info)
    {
        printf("i:%d\n",i);
        
        printf("Current:%d\n",ptr->info);
        i++;
        p=p->link;

        if (ptr->link==NULL)
        {
            p->link=new;
            new->link=NULL;

            return head;
        }
        
        ptr = ptr->link;
    }

    printf("ptr:%d\n",ptr->info);

    new->link = p->link;
    p->link = new;

    return head;
}*/

void main()
{
    // Manually Created Linked List

    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;

    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head = first;

    first->info = 2;
    first->link = second;

    second->info = 4;
    second->link = third;

    third->info = 8;
    third->link = fourth;

    fourth->info = 15;
    fourth->link = NULL;

    //    struct node *head=createLinkedList();
    travarsal(head);
    // travarsal(insertionatend(head));
    // travarsal(insertatbeginning(head));
    // travarsal(insertatindex(2,head));
    // travarsal(insertafternode(head,third));
    // travarsal(deletenodeatfirst(head));
    // travarsal(deleteatend(head));
    // travarsal(deleteatindex(head,3));
    // printf("%d",countNodes(head));
    // copy(head);
    head = insertInOrderedLinkedList(head);
    travarsal(head);
}