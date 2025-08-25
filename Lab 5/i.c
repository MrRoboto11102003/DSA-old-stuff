#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int A[n];
    for(int i=0;i<n;i++)scanf("%d",&A[i]);
    int na=0;
    int val=0;
    for(int i=0;i<n;i++)
    {
        val=(val+A[i])%2;
        if(val==1)na++;
    }
    printf("%d",na);
}