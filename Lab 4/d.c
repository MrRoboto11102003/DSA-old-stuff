#include <stdio.h>
int main()
{
    int n;int q;
    scanf("%d",&n);
    int B[n];for(int i=0;i<n+1;i++)B[i]=i;
    for(int i=2;i<=(n/i);i++)
    {
        if(B[i]==-1)continue;
        for(int j=i+1;j<n;j++)
        {
            if(B[j]==-1)continue;
            if(j%i==0)B[j]=-1;
        }
    }
    scanf("%d",&q);
    int A[q];
    for(int i=0;i<q;i++)scanf("%d",&A[i]);
    int x=0;
    for(int i=0;i<q;i++)
    {
        for(int j=2;j<=A[i];j++)
        {
            if(B[j]==-1)continue;x++;
        }
        printf("%d ",x);x=0;
    }
}