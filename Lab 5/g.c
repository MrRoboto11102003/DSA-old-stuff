#include <stdio.h>
#include <string.h>

void print(int A[],int n,int start)
{
    for(int i=start;i<n;i++){if(A[i]==1)printf("(");else printf(")");}
    printf("\n");
}
int check(int A[],int n,int k)
{
    int s=0;
    for(int i=0;i<n;i++)
    {
        s+=A[i];
    }
    if(s!=k)return 0;
    else return 1;
}
int getscore(int A[],int map[],int B[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        B[map[i]]+=A[i];
    }
    int max=0;
    for(int i=0;i<k;i++){if(max<B[i])max=B[i];B[i]=0;}
    return max;
}
void inc(int A[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(A[i]==k)A[i]=0;
        else {A[i]++;break;}
    }
}

int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    int A[n];
    for(int i=0;i<n;i++)scanf("%d",&A[i]);
    int B[k];
    for(int i=0;i<k;i++)B[i]=0;
    int map[n+1];
    for(int i=0;i<n+1;i++)map[i]=0;
    int min=999999999;
    while(map[n]==0)
    {
        if(check(map,n,k)){if(min>getscore(A,map,B,n,k))min=getscore(A,map,B,n,k);}
        inc(map,n+1,k);
    }
    printf("%d",min);
}