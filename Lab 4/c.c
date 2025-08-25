# include <stdio.h>
int zeros(int x,int max)
{
    int z=0;int fp=5;
    while(max>0)
    {
        z+=x/fp;
        fp*=5;
        max--;
    }
    return z;
}
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    int max=-1;
    for(int i=0;i<n;i++){scanf("%d",&A[i]);if(A[i]>max)max=A[i];}
    int maxcpy=max;
    int mp=0;
    int fp=5;
    while(max>0)
    {
        max/=fp;
        if(max!=0){max*=fp;
        fp*=5;
        mp++;}
    }

    int B[zeros(maxcpy,mp)];
    for(int i=0;i<zeros(maxcpy,mp);i++)B[i]=0;
    for(int i=0;i<n;i++)
    {
        B[zeros(A[i],mp)]++;
    }
    int total=0;
    for(int i=0;i<zeros(maxcpy,mp);i++)total+=((B[i]*(B[i]-1))/2);
    printf("%d",total);
}