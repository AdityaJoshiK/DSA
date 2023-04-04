#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    int n,ans=0,digit,i=0;

    cout<<"Enter Number:";
    cin>>n;

    while (n!=0)
    {
        digit=n%10;
        
        if (digit==1)
        {
            ans=ans+pow(2,i);
        }
        
        i++;
        n=n/10;
    }
    
cout<<ans<<endl;
    return 0;

}