#include<iostream>
using namespace std;

int fact_tailrecursive(int n,int val=1){
    if (n==0)
    {
        return val;
    }

    return fact_tailrecursive(n-1,n*val);
    
}

int fact(int n)
{
    cout<<n<<endl;
    if(n==0)
    {
        return 1;
    }

    else{
        // cout<<n<<endl;
        return n*fact(n-1);
    }
}

int main()
{

    // cout<<fact(4);
    cout<<fact_tailrecursive(4);
    return 0;

}