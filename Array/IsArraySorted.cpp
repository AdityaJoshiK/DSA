#include<iostream>
using namespace std;

bool isSorted(int a[],int n)//code is written by me
{
    bool isSorted=false;
    int count=0;

    for (int i = 0; i < n; i++)
    {
        if (i+1>=n)
        {
            break;
        }
        
        if (a[i+1]>a[i])
        {
            count++;
        }
        
    }

    if (count==n-1)
    {
        isSorted=true;
    }

    return isSorted;
}

int main()
{

    // int a[]={5,9,10,85,100},n=5;
    // int a[]={40,58,66,71,98},n=5;
    int a[]={5,4,8,1,7,75,14,2,68,70},n=10;

    cout<<isSorted(a,n);
    return 0;

}