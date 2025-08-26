#include <stdio.h>

int main()
{
    int n, i, sum=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(int i=1;i<=n;i++);
    {
        sum=sum+i;
    }
    printf("sum of first %d natural numbers is %d\n",n,sum);
    return 0;
}