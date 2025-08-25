#include <stdio.h>
int main()
{
    int n,k,mid,temp;
    scanf("%d %d",&k,&n);
    mid=(k+1)/2;
    int arr[n];
    for(int i=0;i<n;i++)scanf("%d",&arr[i]);

    int sno=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<mid)
        {
            temp=arr[i];
            for(int j=i-1;j>=sno;j--)
            {
                arr[j+1]=arr[j];
            }
            arr[sno]=temp;
            sno++;
        }
    }
    for(int i=0;i<n;i++)printf("%d ",arr[i]);

}