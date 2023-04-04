//incremenet back index
//insert at back index
//o(1)

#include<stdio.h>
#include<stdlib.h>

struct Queue
{
    int size;
    int f;
    int r;
    int *arr;
};


void printQueue(struct Queue *q)
{
    // printf("%d",q->f);
    // printf("%d",q->r);
    for (int i = q->f; i <=q->r; i++)
    {
        printf("%d ",q->arr[i]);
    }
    printf("\n");
    
}

int isFull(struct Queue *q)
{
    if (q->r>=q->size-1)
    {
       return 1;
    }
    return 0;
    
}

int isEmpty(struct Queue *q)
{
    if (q->r==q->f)
    {
       return 1;
    }
    return 0;
    
}

void enQueue(struct Queue *q,int val)
{
    if (q->f==-1)
    {
        q->f=0;
    }

    if(isFull(q))
    {
        printf("Queue Overflow\n");
    }
    else{
        q->r=q->r+1;
        q->arr[q->r]=val;
    }
}

int deQueue(struct Queue *q)
{
    int a=-1;

    if (isEmpty(q))
    {
        printf("Queue is Empty\n");
    }

    else{
        a=q->arr[q->f];
        q->f++;
    }

    return a;
    
}

int main()
{

    struct Queue q;

    q.size=4;
    q.f=-1;
    q.r=-1;
    q.arr=(int*)malloc(q.size*sizeof(int));

    enQueue(&q,1);
    enQueue(&q,2);
    enQueue(&q,3);
    enQueue(&q,4);
    printQueue(&q);
    printf("Dequeued Element %d\n",deQueue(&q));
    printf("Dequeued Element %d\n",deQueue(&q));
    printQueue(&q);
    
    return 0;

}