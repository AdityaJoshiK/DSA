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

void bubbleSort(int a[],int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
            
        }
        
    }
    
}

int main()
{

    int a[6]={7,11,9,2,17,4},n=6;

    print(a,n);
    bubbleSort(a,n);
    print(a,n);
    return 0;

}