#include <stdio.h>
int main()
{
    int n; int k;
    scanf("%d %d",&n,&k);
    int A[n];for(int i=0;i<n;i++)A[i]=0;
    int vote;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&vote);
        A[vote-1]++;
    }
    int max=0;int s;
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(A[j]>max){max=A[j];s=j;}
        }
        A[s]=-1;
        printf("%d ",s+1);
        s=0;
        max=0;
    }
}