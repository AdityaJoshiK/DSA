#include<iostream>
#include<cmath>
using namespace std;

int DecimalToBinary(int n)
{
    int ans=0,bit,i=0,count=0;

   while (n!=0)
   {
        bit=n%2;
        n=n/2;
        ans=(bit*pow(10,i))+ans;
        i++;

        if (bit==1)
        {
            count++;
        }
        
   }
   
    return count;
}

int s(int n)
{
    int count=0;

    while (n!=0)
    {
        if (n&1)
        {
            count++;
        }
        n=n>>1;
    }

    return count;
    
}

int main()
{
    int n;

    cout<<"Enter Number:";
    cin>>n;

    cout<<"Answer:"<<DecimalToBinary(n)<<endl;
    cout<<"Answer:"<<s(n)<<endl;

    return 0;

}