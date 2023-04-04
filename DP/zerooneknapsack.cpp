#include<iostream>
using namespace std;

int knapSack(int wt[],int val[],int w,int n)
{
    //BaseCondition
    if (n==0 || w==0)
    {
        return 0;
    }

    if (wt[n-1]>w)
    {
        return knapSack(wt,val,w,n-1);
    }

    else if (wt[n-1]<=w)
    {
        return val[n-1]+knapSack(wt,val,w-wt[n-1],n-1);
    }
    
    
}

int main()
{

    int wt[]={1,2,5,6,7};
    int val[]={1,6,18,22,28};
    int w=11,n=5;

    cout<<knapSack(wt,val,w,n);

    return 0;

}