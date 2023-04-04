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

void sort(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]>a[i+1])
        {
            swap(a[i],a[i+1]);
        }
        
    }
    
}

int main()
{

    int a[]={0,2,1,2,0},n=5;

    print(a,n);
    sort(a,n);
    print(a,n);
    return 0;

}