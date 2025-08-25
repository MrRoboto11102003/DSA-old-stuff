#include <stdio.h>
int main()
{
    int n,s,temp,x=0;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)scanf("%d",&A[i]);
    int fp=0,fn=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]<0)
        fn=i;  
        if(A[i]<0&&fn!=fp)
        {
            temp=A[fn];
            while(fp!=fn)
            {
                A[fn-x]=A[fn-1-x];
                fp++;
                x++;
            }
            A[fn-x]=temp;
            x=0;
        }
    for(int j=0;j<n;j++)
    {printf("%d ",A[j]);}
    printf("\n");
    }
    return 0;
}