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

void findkthsmall(int a[],int n,int k)
{
    int small=0;

    for (int i = 0; i < n; i++)
    {
        if (a[small]>a[i])
        {
            small=i;
        }
    }
    cout<<small<<endl;
}

int main()
{

    int a[]={ 7,10,4,3,20,15},n=6,k=3;

    print(a,n);
    findkthsmall(a,n,k);
    print(a,n);
    return 0;

}