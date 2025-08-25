#include <stdio.h>
int main()
{
    int n,k,t;
    scanf("%d %d %d",&n,&k,&t);
    int A[n];
    for(int i=0;i<n;i++)scanf("%d",&A[i]);
    int avg=(k-1)*t;
    int s=0,teams=0;
    for(int i=0;i<n-k;i++)
    {
        for(int j=i;j<i+k;j++)
        {
            s+=A[j];
        }
        if(s>avg)teams++;
        s=0;
    }
    printf("%d",teams);
}