#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int n,bit,ans=0,i=0;

    cout<<"Enter Number:";
    cin>>n;

    while (n!=0)
    {
        bit=n&1; //and operation between 10 AND 1(1010 & 0001)
        n=n >> 1;//it shifts bits right 1010 at 1 position and answer is 0101 means it divide by 2
        ans=(bit*pow(10,i))+ans;
        i++;
    }
    
    cout<<ans;
    return 0;

}