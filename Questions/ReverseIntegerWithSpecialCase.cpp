/*If Reverse Answer is go out of range of int then return 0*/

#include<iostream>
using namespace std;

int reverse(int x)
{
    int ans=0,digit=0;

    while (x!=0)
    {
        digit=x%10;
        if (ans>INT_MAX/10 || ans<INT_MIN/10)
        {
            return 0;
        }
        
        ans=(ans*10)+digit;
        x=x/10;
    }
    
    return ans;
}

int main()
{
    int x;

    cout<<"Enter Number:";
    cin>>x;

    cout<<"answer:"<<reverse(x)<<endl;
    // cout<<INT_MAX<<endl;
    // cout<<INT_MAX/10<<endl;
    // cout<<INT_MIN<<endl;
    
    return 0;

}