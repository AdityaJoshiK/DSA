#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
};

void print(struct node *head)
{
    struct node *temp = head;

    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->link;
    }

    printf("\n");
}

struct node *create(struct node *head,int data)
{
    struct node *temp = head;
    struct node *save = head;
    struct node *new = (struct node *)malloc(sizeof(struct node *));

    new->data = data;

    // printf("Enter Data:");
    // scanf("%d", &new->data);
    new->link = NULL;

    if (head == NULL)
    {
        printf("Inside IF");
        head = new;
    }

    else
    {

        while (save->link != NULL)
        {
            save = save->link;
        }
        printf("%d", save->data);
        save->link = new;
    }

    printf("%d\n", new->data);

    return head;
}
struct node *add(struct node *head)
{
    struct node *temp = head;
    struct node *save = head;
    struct node *new = (struct node *)malloc(sizeof(struct node *));

    new->data = 2;

    printf("Enter Element:");
    scanf("%d", &new->data);
    new->link = NULL;

    if (head == NULL)
    {
        printf("Inside IF");
        head = new;
    }

    else
    {

        while (save->link != NULL)
        {
            save = save->link;
        }
        printf("%d", save->data);
        save->link = new;
    }

    printf("%d\n", new->data);

    return head;
}

struct node *sort(struct node *head )
{
    struct node *temp = head;
    struct node *save = head->link;
    ;
    int c = 0,f=0;

    while (temp != NULL)
    {
         c = temp->data;
        // print(head);
        while (save != NULL)
        {
            if (c>save->data)
            {
                /* code */
                f=save->data;
                save->data=c;
                temp->data=f;
                break;
            }
            

            save = save->link;
        }
        save=temp->link;
        temp = temp->link;
    }

    return head;
}

// struct node *sort(struct node *head)
// {
//     struct node *temp = head;
//     struct node *save = temp;
//     int c = 0;

//     int i = 1;
//     while (save->link != NULL)
//     {
//         // printf("%d",i);

//         while (temp->link != NULL)
//         {
//             // printf("%d\n", temp->data);
//             if (temp->data > (temp->link)->data)
//             {
//                 c = (temp->link)->data;
//                 (temp->link)->data = temp->data;
//                 temp->data = c;
//             }
//             temp = temp->link;

//             //  break;
//         }
//         save = save->link;
//         i++;
//     }
//     return head;
// }

int main(int argc, char const *argv[])
{
    struct node *head = NULL;

    int i = 1;

    // printf("Enter 1 to Create Node And 0 to Exit: ");
    //     scanf("%d", &i);
    // while (i != 0)
    // {

    head = create(head,3);
    head = create(head,5);
    head = create(head,6);
    head = create(head,2);
    head = create(head,8);
    //     print(head);
    //     printf("Enter 1 to Create Node And 0 to Exit: ");
    //     scanf("%d", &i);
    // }

    printf("\n");
    // print(head);
    head = sort(head);
    // printf("Sorted:");
    print(head);

    head=add(head);
    head = sort(head);
    print(head);
    return 0;
}
