#include<iostream>
using namespace std;

int secondmax(int a[],int n)
{
    int largest=0,smax=0,res=-1;

    for (int i = 1; i < n; i++)
    {
        if (a[i]>a[largest])
        {
            largest=i;
        }        
    }

    for (int i = 0; i < n; i++)
    {
        if (a[largest]!=a[i])
        {
            if (res==-1)
            {
                res=i;
            }
            
            else if (a[i]>a[smax])
            {
                smax=i;
            }   
        }
    }
    // cout<<"smax:"<<a[smax]<<endl;
    return res;
}

int efficientapproach(int a[],int n)//best way to find
{
    int res=-1,largest=0;

    for (int i = 0; i < n; i++)
    {
        if (a[i]>a[largest])
        {
            res=largest;
            largest=i;
        }
        
        else if (a[i]!=a[largest])
        {
             if (res==-1 || a[i]>a[res])
             {
                res=i;
             }
        }   
    }
    return res;
}

int main()
{

    int a[]={7895,25,65,6543,6546,78,12,36,10,33656},n=10;
    int b[]={10,10,10};

    cout<<"Index Of Second Max:"<<secondmax(a,n)<<endl;
    cout<<"Value Of Second Max:"<<a[secondmax(a,n)]<<endl;
    cout<<"Index Of Second Max Using Efficient Approach:"<<efficientapproach(a,n)<<endl;
    cout<<"Value Of Second Max Using Efficient Approach:"<<a[efficientapproach(a,n)]<<endl;
    cout<<secondmax(b,3)<<endl;
    cout<<efficientapproach(b,3)<<endl;
    return 0;

}