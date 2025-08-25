#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int A[m][n];
    int B[m][n];
    int sum=0;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&A[i][j]);
            sum+=A[i][j];
            B[i][j]=sum;
        }
    }
    int ri,ci,rh,ch;
    sum=0;
    scanf("%d %d %d %d",&ri,&ci,&rh,&ch);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }
    if(ri+rh<=m&&ci+ch<=n)
    {
        for(int i=ri;i<rh+ri;i++)
        {
            for(int j=ci;j<ch+ci;j++)
            {
                sum+=B[i][j];
            }
        }
    printf("%d",sum);
    }
    else
    printf("NOT POSSIBLE");
    return 0;
}
