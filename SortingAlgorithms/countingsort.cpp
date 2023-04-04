#include<iostream>
using namespace std;
//wrong
void printArray(int a[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<",";
    }
    cout<<endl;
}

int counting_sort(int a[],int b[],int n,int max)
{
    int c[max+1];

    for (int i = 0; i <= max; i++)
    {
        c[i]=0;
    }

    printArray(c,max+1);

    for (int i = 0; i < n; i++)
    {
        c[a[i]]=c[a[i]]+1;
    }

    printArray(c,max+1);
    
    for (int i = 1; i < n; i++)
    {
        c[i]=c[i]+c[i-1];
    }

    printArray(c,max+1);

    printArray(b,n);
    for (int i = n-1; i >=0; i--)
    {
        b[c[a[i]]]=a[i];
        // cout<<b[c[a[i]]]<<endl;
        c[a[i]]=c[a[i]]-1;
    }
    
    printArray(b,n);

    return 0;
}

int maxele(int a[],int size)
{

    int max=a[0];

    for (int i = 1; i < size; i++)
    {
        if (a[i]>max)
        {
            max=a[i];
        }
        
    }

    return max;
    
}

int main()
{

    int a[]={3,6,4,1,3,4,1,4,2};

    int size=sizeof(a)/sizeof(a[0]);

    int max=maxele(a,size);

    counting_sort(a,a,size,max);
    return 0;

}