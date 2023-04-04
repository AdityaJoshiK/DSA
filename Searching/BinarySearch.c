#include<stdio.h>
 
void main()
{
    int a[5]={100,300,489,586,894};//array must be sorted

    int size=5,element=489;

    int low=0,high=size-1;

    int mid=(low+high)/2;

    while (low<=high)
    {
        if (a[mid]==element)
        {
            printf("Element Found At Index %d",mid);
        }
        if (a[mid]<element)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
        mid=(low+high)/2;
    }
    
}