#include<iostream>
#include<cstring>
using namespace std;

bool isPal(char str[],int start,int end)
{
    // cout<<str<<" "<<start<<" "<<end<<endl;
    if (start==end)
    {
        return true;
    }

    if (start>end)
    {
        return true;
    }

    if (str[start]!=str[end])
    {
        return false;
    }

    return isPal(str,start+1,end-1);
    
}

int main()
{
    char str[]="aabaa";

    cout<<isPal(str,0,strlen(str)-1);

    return 0;

}