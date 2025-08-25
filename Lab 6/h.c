#include <stdio.h>
void removeElement(int A[],int n,int x)
{
    for(int i=x;i<n-1;i++)
    {
        A[i]=A[i+1];
    }
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    k--;
    int A[n];
    for(int i=0;i<n;i++)A[i]=i+1;
    int x=0;
    while(n>0)
    {
        x+=k;
        x=x%n;
        removeElement(A,n,x);
        n--;
    }
    printf("%d",A[0]);
}