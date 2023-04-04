#include<stdio.h>

void traversal(int a[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    
}

void insert(int a[],int totalsize,int usedsize,int element,int insertindex)
{
    for (int i = usedsize-1; i >=insertindex; i--)
    {
        // printf("i:%d,a[i]:%d\n",i,a[i]);
        a[i+1]=a[i];
    }
    a[insertindex]=element;
    
}

void delete(int a[],int usedsize,int element)
{
    int i;
    for (i = 0; i <=usedsize; i++)
    {
        if (a[i]==element)
        {
            break;
        }
        
        
    }
        for (int j = i; j < usedsize; j++)
        {
            a[j]=a[j+1];
        }
    
}
 
void main()
{
    int arr[6]={1,2,3,4,5},n=6,usize=5;

    traversal(arr,usize);
    // insert(arr,n,usize,8,1);
    // usize++;

    delete(arr,usize,3);
    usize--;
    traversal(arr,usize);

}