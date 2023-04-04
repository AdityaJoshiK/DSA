#include<iostream>
using namespace std;

void func(int n)
{
    if (n<1)
    {
        return;
    }
    
    else{
        cout<<n<<" ";
        func(n-1);
        cout<<n<<" ";
    }
}

int main()
{

    func(3);
    return 0;

}