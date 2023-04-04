#include<iostream>
using namespace std;

int sum(int n)
{
    if(n<10)//if single digit
    {
        return n;
    }

    return sum(n/10)+n%10;
}

int main()
{

    cout<<sum(542);
    return 0;

}