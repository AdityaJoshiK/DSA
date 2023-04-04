#include<iostream>
using namespace std;

void print(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void leftRotate(int a[],int n)
{
    int first=a[0];

    for (int i = 0; i < n-1; i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=first;
}

void rigthRotate(int a[],int n)
{
    int last=a[n-1];

    for (int i = n-1; i > 0; i--)
    {
        a[i]=a[i-1];
    }
    a[0]=last;
}

int main()
{

    // int a[]={1,2,3,4,5},n=5;
    int a[]={5,4,8,1,7,75,14,2,68,70},n=10;

    print(a,n);
    leftRotate(a,n);
    print(a,n);
    rigthRotate(a,n);
    print(a,n);

    return 0;

}