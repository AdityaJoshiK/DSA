//print 1 to n without using loop OR
//write a recursion func. to print  1 to n

#include<iostream>
using namespace std;

void funcusingtailrecursive(int n,int k=1)
{
    if(n<1){return;}

    cout<<k<<" ";
    funcusingtailrecursive(n-1,k+1);
}

void func(int n)
{
    if (n<=0)
    {
        return;
    }
    
    func(n-1);
    cout<<n<<' ';
}

int main()
{
    
    // func(5);
    funcusingtailrecursive(5);
    return 0;

}