#include<stdio.h>

void printArray(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n");
}

void selectionShort(int a[],int n)
{
    int minIndex,temp;

    for (int i = 0; i < n-1; i++)
    {
        printf("pass:%d\n",i+1);
        minIndex=i;

        for (int j = i+1; j < n; j++)
        
        {
            if (a[j]<a[minIndex])
            {
                minIndex=j;
            }
        }
            printf("minIndex:%d\n",minIndex);
            temp=a[i];
            a[i]=a[minIndex];
            a[minIndex]=temp;
            printArray(a,n);
        
    }
    
}
 
void main()
{
    int a[5]={8,0,7,1,3};
    int n=5;

    printArray(a,n);
    selectionShort(a,n);
    printArray(a,n);
    
}