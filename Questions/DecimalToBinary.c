#include<stdio.h>
#include<math.h>
 
void main()
{
    int n,i=0,ans=0,bit;

    printf("Enter Number:");
    scanf("%d",&n);

    while (n!=0)
    {
        bit=n%2;
        // printf("%d\n",ans);
        n=n/2;
        ans=(bit*pow(10,i))+ans;

        i++;
    }

    // for (int i = 3; i >= 0; i--)
    // {
        printf("%d",ans);
    // }
    
    
}