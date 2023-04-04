#include<iostream>
using namespace std;

int main()
{

    int n;

    cout<<"Enter Number:";
    cin>>n;

    int product=1,sum=0,digit;

    while (n!=0)
    {
        digit=n%10;

        product=product*digit;
        sum=sum+digit;

        n=n/10;
    }

    int ans=product-sum;
    
    cout<<ans<<endl;
    

    return 0;

}