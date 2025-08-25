#include <stdio.h>
#include <string.h>
int main()
{
    int n;int k;
    scanf("%d %d",&n,&k);

    char C[n];
    scanf("%s",C);
    int A[k];for(int i=0;i<k;i++)A[i]=97+i;
    int B[k];for(int i=0;i<k;i++)B[i]=0;
    int flag=1;
    int an=0;
    int li=1;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<k;j++)
        {
            if(C[i]==(char)A[j]){B[j]++;break;}
        }
        for(int j=0;j<k;j++)
        {
            if(B[j]==0)flag=-1;
        }
        if(flag==1)
        {
            B[C[i]]--;
            an+=li;

            if(C[li-1]==C[i])li++;
        }
        flag=1;
    }
    printf("%d ",an);
}