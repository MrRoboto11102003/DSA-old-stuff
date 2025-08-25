#include <stdio.h>
#include <stdlib.h>

void addLeft(int A[],int n,int x)
{
    for(int i=n-1;i>0;i--)
    {
        A[i]=A[i-1];
    }
    A[0]=x;
}

int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    int left;
    int right;
    int x;
    scanf("%d",&x);
    A[0]=x;
    left=A[0];right=A[0];
    for(int i=1;i<n;i++)
    {
        scanf("%d",&x);
        if(x<left){left=x;addLeft(A,n,x);}
        else{right=x;A[i]=x;}
    }
    for(int i=0;i<n;i++)printf("%d ",A[i]);
    
}