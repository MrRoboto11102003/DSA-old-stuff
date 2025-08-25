#include <stdio.h>
int main()
{
    int n;int k;
    scanf("%d %d",&n,&k);
    int A[n];
    for(int i=0;i<n;i++)scanf("%d",&A[i]);
    int min=999;int l=0;int minl=0;
    while(k>0)
    {
        for(int i=0;i<n;i++)
        {
            if(A[i]==0)l++;
            else 
            {
                if(l<min){min=l;minl=i;}
                l=0;
            }
        }
        for(int i=minl;i<minl+min;i++)A[i]=1;
    }
}