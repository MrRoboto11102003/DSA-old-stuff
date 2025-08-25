#include <stdio.h>
#include <stdlib.h>
#define SUM ((t*n)-((t*(t-1))/2))
int main()
{
    int n,t,k=0;
    scanf("%d",&n);
    int left=0,right=n;
    int N=(n*(n-1))/4;
    while(left!=right)
    {
        t=(left+right)/2;
        if(SUM>=N&& (((t-1)*n)-(((t-1)*(t-2))/2))<N)break;
        if(SUM<=N)left=t;
        else right=t;
    }
    printf("%d",t);
}