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

int movezeroatendusing_myapparoach(int a[],int n)//this solution not recommanded because O(n^2)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i]==0)
        {
            for (int j = i; j < n; j++)
            {
                a[j]=a[j+1];
            }
            a[n-1]=0;
        }
        
    }
    return 0;
}

int movezeroatendusing_naivesolution(int a[],int n){//this solution not recommanded because O(n^2)

    for (int i = 0; i < n; i++)
    {
        cout<<"i:"<<i<<endl;
        if (a[i]==0)
        {
            for (int j = i+1; j < n; j++)
            {
                if (a[j]!=0)
                {
                    swap(a[i],a[j]);
                    print(a,n);
                    break;
                }
            }
        }
        
    }
    return 0;
}

int movezeroatendusing_efficientapparoach(int a[],int n)//best solution because O(n)
{
    int count=0;

    for (int i = 0; i < n; i++)
    {
        if (a[i]!=0)
        {
            swap(a[i],a[count]);
            count++;
        }
        
    }
    return 0;
}

int main()
{

    int a[]={4,8,0,9,0,5,3,0,6,8,0,4},n=12;
    print(a,n);
    // movezeroatendusing_myapparoach(a,n);
    // movezeroatendusing_efficientapparoach(a,n);
    movezeroatendusing_naivesolution(a,n);
    print(a,n);
    return 0;

}