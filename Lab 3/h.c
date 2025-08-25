#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,sqr;
    scanf("%d",&n);
    int left=0,right=n;
    while(left!=right)
    {
        sqr=(left+right)/2;
        if((sqr*sqr)<=n&&((sqr+1)*(sqr+1))>n)break;
        if((sqr*sqr)<=n)left=sqr;
        else right=sqr;
    }
    printf("%d",sqr);
}