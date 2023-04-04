/*
    ->one by one sent high element to end
*/


#include<stdio.h>

void printArray(int a[],int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void bubbleSort(int a[],int n)
{
    int temp;

    for (int i = 0; i < n-1; i++)
    {
        // printf("pass %d\n",i+1);
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            
        }
        
    }
    
}

void bubbleSortAdaptive(int a[],int n)//adaptive means if array is sorted then it can't run all pass
{
    int temp,isSorted=0;

    for (int i = 0; i < n-1; i++)
    {
        printf("pass %d\n",i+1);
        isSorted=1;
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                isSorted=0;
            }
            
        }

        if (isSorted)
        {
            return;
        }
        
        
    }
    
}
 
void main()
{
    // int a[6]={7,11,9,2,17,4};
    int a[6]={1,2,3,4,5,6};
    int len=6;

    printArray(a,len);
    // bubbleSort(a,len);
    bubbleSortAdaptive(a,len);
    printArray(a,len);
}