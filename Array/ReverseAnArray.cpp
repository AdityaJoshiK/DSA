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

void reverseArray(int a[],int n)
{
    int start=0,end=n-1;

    while (start<end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
}

int main()
{

    int a[]={5,4,8,1,7,75,14,2,68,70},n=10;
    // int a[]={1,2,3,4,5},n=5;

    print(a,n);
    reverseArray(a,n);
    print(a,n);
    return 0;

}