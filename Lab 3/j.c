#include <stdio.h>
#include <stdlib.h>
int sum(int A[],int n,int d)
{
    if(d==0)return -1;
    int s=0;
    for(int i=0;i<n;i++)s+=((A[i])/d);
    return s;
}
int main()
{
    int n,t,k,l=0;
    scanf("%d",&n);
    scanf("%d",&k);
    int A[n];
    for(int i=0;i<n;i++)scanf("%d",&A[i]);
    int left=0,right=k;
    while(left!=right&&l!=25)
    {
        l++;
        t=(left+right)/2;
        if(sum(A,n,t)>=k&&sum(A,n,t+1)<k)break;
        if(sum(A,n,t)>k)left=t;
        else right=t;
    }
    printf("%d",t);
}