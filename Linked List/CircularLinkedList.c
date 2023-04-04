#include <stdio.h>
#include <stdlib.h>

struct node
{
    int info;
    struct node *link;
};

struct node *createLinkedList(void);
void traversal(struct node *ptr);
struct node *insertAtEnd(struct node *head);
struct node *insertAtFirst(struct node *head);
struct node *insertAtGivenIndex(int index, struct node *head);
struct node *insertAfterNode(struct node *head, struct node *p);

struct node *deleteAtFirst(struct node *head);
struct node *deleteAtLast(struct node *head);
struct node *deleteAtGivenValue(int value, struct node *head);
struct node *deleteAfterNode(struct node *head, struct node *p);

void main()
{
    struct node *head=createLinkedList();
    /*struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));

    first->info = 1;
    first->link = second;

    head = first;

    second->info = 2;
    second->link = third;

    third->info = 3;
    third->link = fourth;

    fourth->info = 4;
    fourth->link = head;*/

    traversal(head);
    // head=insertAtFirst(head);
    // head=insertAtEnd(head);
    // head=insertAtGivenIndex(2,head);
    // head=insertAfterNode(head,second);
    // head=deleteAtFirst(head);
    // head=deleteAtLast(head);
    // head=deleteAtGivenValue(2,head);
    // head = deleteAfterNode(head, second);
    traversal(head);
}

void traversal(struct node *head)
{
    struct node *ptr = head->link;

    printf("Element:%d\n", head->info);

    while (ptr != head)
    {
        printf("Element:%d\n", ptr->info);
        ptr = ptr->link;
    }
}

struct node *insertAtEnd(struct node *head)
{
    struct node *ptr = head->link;

    while (ptr->link != head)
    {
        ptr = ptr->link;
    }

    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d", &new->info);

    ptr->link = new;
    new->link = head;

    return head;
}

struct node *insertAtFirst(struct node *head)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d", &new->info);

    struct node *ptr = head->link;

    while (ptr->link != head)
    {
        ptr = ptr->link;
    }

    ptr->link = new;
    new->link = head;
    head = new;

    return head;
}

struct node *insertAtGivenIndex(int index, struct node *head)
{
    struct node *ptr = head;

    int i = 0;

    while (i != index - 1)
    {
        ptr = ptr->link;
        i++;
    }

    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d", &new->info);

    new->link = ptr->link;
    ptr->link = new;

    return head;
}

struct node *insertAfterNode(struct node *head, struct node *p)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));

    printf("Enter Info:");
    scanf("%d", &new->info);

    struct node *ptr = head;

    while (ptr != p)
    {
        ptr = ptr->link;
    }

    new->link = ptr->link;
    ptr->link = new;

    return head;
}

struct node *deleteAtFirst(struct node *head)
{
    struct node *ptr = head->link;
    struct node *p = head;

    while (ptr->link != head)
    {
        ptr = ptr->link;
    }

    ptr->link = head->link;
    head = head->link;

    free(p);

    return head;
}

struct node *deleteAtLast(struct node *head)
{
    struct node *ptr = head->link;
    struct node *p = head;

    while (ptr->link != head)
    {
        ptr = ptr->link;
        p = p->link;
    }

    p->link = head;
    free(ptr);

    return head;
}

struct node *deleteAtGivenValue(int value, struct node *head)
{
    struct node *ptr = head->link;
    struct node *p = head;

    while (ptr->info != value && ptr != head)
    {
        ptr = ptr->link;
        p = p->link;
    }

    if (head->info == value)
    {
        p->link = head->link;
        head = head->link;
    }

    else
    {
        p->link = ptr->link;
    }

    free(ptr);

    return head;
}

struct node *deleteAfterNode(struct node *head, struct node *p)
{
    struct node *ptr = head;
    struct node *save = head->link;

    while (ptr != p)
    {
        ptr = ptr->link;
        save = save->link;
    }

    ptr->link = save->link;
    free(save);

    return head;
}

struct node *createLinkedList(void)
{
    int choice = 1;

    struct node *head = NULL;
    struct node *ptr = head;

    while (choice != 0)
    {
        struct node *new = (struct node *)malloc(sizeof(struct node));

        printf("Enter Info:");
        scanf("%d", &new->info);

        new->link = head;

        if (head == NULL)
        {
            head = new;
            ptr = new;
        }
        else
        {
            ptr->link = new;
            ptr = new;
        }
        printf("Do You Want To Add New Node(0,1):");
        scanf("%d", &choice);
    }

    return head;
}