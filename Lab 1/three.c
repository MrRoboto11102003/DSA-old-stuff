#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    int sum;
    scanf("%d",&sum);
    int j=0,psum=0;int g=0,flag=0;

    for(int i=0;i<pow(2,n);i++)
    {
        j=i;
        while(j>0)
        {
            psum+=A[g]*(j%2);
            g++;
            j/=2;
        }
        g=0;
        if(psum==sum)
        {
            printf("Possible\n");
            j=i;
        while(j>0)
        {
            if(j%2!=0)printf("%d ",g);
            g++;
            j/=2;
        }
        break;
        }
        psum=0;
    }
    if(flag==0)printf("Not possible");
}