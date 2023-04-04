#include<stdio.h>

void insert(int a[],int element,int index,int usedsize,int asize)
{
    for (int i = usedsize-1; i >= index; i--)
    {
        a[i+1]=a[i];
    }
    a[index]=element;
}

void delete(int a[],int index,int usedsize)
{
    for (int i = index; i < usedsize-1; i++)
    {
        a[i]=a[i+1];
    }
    
    
}

void traversal(int a[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    
}

void linearSearch(int a[],int element,int asize)
{
    int j=0;
    for (int i = 0; i < asize; i++)
    {
        if (a[i]==element)
        {
            printf("Elemnt Found At %d",i);
            j++;
            break;
        }
    }
    if (j==0)
    {
         printf("Not Found");
    }  
}

int binarySerach(int a[],int element,int asize)
{
   int mid=0,low=0,high=asize-1;

    while (high>=low)
    {
        mid=(low+high)/2;
        if (element==a[mid])
        {
            return mid;
        }
        else if (element<a[mid])
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
    }
    
    return mid;
}
 
void main()
{
    int a[10]={1,2,3,4,5,7,8,9,10,11},element=6,index=2,asize=10,usize=6;

    linearSearch(a,7,10);
    printf("\nElement Found At %d",binarySerach(a,5,10));
    // insert(a,element,index,asize,usize);
    // asize+=1;
    // // usize+=1;
    // traversal(a,asize);
    // int arr[10]={1,2,3,4,5};
    // delete(arr,index,7);
    // asize-=1;
    // traversal(arr,asize); 
}