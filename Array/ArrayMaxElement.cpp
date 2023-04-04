#include<iostream>
using namespace std;

int getmax(int a[],int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag=true;
        // cout<<"i:"<<i<<a[i]<<endl;

        for (int j = 0; j < n; j++)
        {
            // cout<<"j:"<<j<<a[j];
            if (a[j]>a[i])
            {
                flag=false;
                break;
            }

        }
        // cout<<flag<<endl;
            if (flag==true)
            {
                // cout<<i<<endl;
                return i;
            }

    }
        return -1;      
    
}

int efficientapproach(int a[],int n)
{
    int result=0;

    for (int i = 1; i < n; i++) 
    {
        if (a[i]>a[result])
        {
            result=i;
        }
    }
        return result;
    
}

int main()
{

    int arr[]={1,2,3,4,5},n=5;
    // int maxindex=getmax(arr,n);
    int maxindex=efficientapproach(arr,n);
    cout<<"max index:"<<maxindex<<endl;
    cout<<"max element:"<<arr[maxindex];
    return 0;

}