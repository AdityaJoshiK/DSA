#include<stdio.h>
 
void main()
{
    int a[5]={110,500,46,653,547};

    int size=4,element=46;

    for (int i = 0; i < size; i++)
    {
        if (a[i]==element)
        {
            printf("Element Found At Index %d",i);
        }
        
    }
    
}