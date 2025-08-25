#include <stdio.h>
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int A[n],K[n];
    for(int i=0;i<n;i++){scanf("%d",&A[i]);K[i]=0;}
    K[0]=1;
    int na=0;
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=A[i];
        na+=K[s%k];
        K[s%k]++;
    }
    printf("%d",na);
}