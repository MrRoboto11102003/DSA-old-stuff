#include <stdio.h>
int main()
{
    int n,l=1,dir=0,ls=1;
    scanf("%d",&n);
    int A[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {A[i][j]=0;}}
    int x,y;
    x=n/2+1;
    if(n%2==0)
    y=n/2;
    else
    y=n/2+1;

    for(int i=1;i<=n*n;i++)
    {
        A[x-1][y-1]=2*i;
        if(dir==0)y++;
        if(dir==1)x--;
        if(dir==2)y--;
        if(dir==3)x++;

        l--;
        if(l==0&&(dir%2==0)){l=ls;dir++;}
        else
        if(l==0&&(dir%2!=0)){ls++;l=ls;dir++;}
        dir=dir%4;
    }
    
    int digits=0,temp=0;
    char c=' ';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",A[i][j]);
            if((A[i][j]-A[i][j+1])==2||(A[i][j]-A[i][j+1])==-2)c='-';
            temp=A[i][j];
            while(temp!=0){digits++;temp/=10;}
            for(int k=digits;k<5;k++)printf("%c",c);
            digits=0;c=' ';
        }
        printf("\n");
        for(int j=0;j<n;j++)
        {
            if((A[i][j]-A[i+1][j])==2||(A[i][j]-A[i+1][j])==-2)printf("|    ");
            else printf("     ");
        }
        printf("\n");
    }
    return 0;
}