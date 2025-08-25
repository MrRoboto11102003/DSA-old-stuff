#include <stdio.h>
#include <string.h>

void print(int A[],int n,int start)
{
    for(int i=start;i<n;i++){if(A[i]==1)printf("(");else printf(")");}
    printf("\n");
}
int check(int A[],int n,int start)
{
    if(n==start)return 1;
    int s=0;
    int oc=0,cc=0;
    for(int i=start;i<n;i++)if(A[i]==1)s++;
    if(s*2!=n)return 0;
    for(int i=start;i<n;i++)
    {
        if(A[i]==1)oc++;if(A[i]==0)cc++;
        if(cc>oc)return 0;
    }
    return 1;
}
void inc(int A[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==1)A[i]=0;
        else {A[i]=1;break;}
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int A[n+1];
    for(int i=0;i<=n;i++)A[i]=0;
    int x=1;
    for(int i=1;i<n/2;i++)
    {
        x*=((4*i)+2);
        x/=(i+2);
    }
    printf("%d \n",x);
    while(A[n]==0)
    {
        if(check(A,n,0)){print(A,n,0);}
        inc(A,n+1);
    }
}