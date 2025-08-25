#include <stdio.h>
#include <math.h>
int main()
{
    long long int a,b,j=2;
    int check=0;
    scanf("%d %d",&a,&b);
    int digits[10];
    for(int i=0;i<10;i++)
    {digits[i]=0;
    }
    int d=0;
    for(long long int i=a;i<=b;i++)
    {
        for(j=2;j<pow(i,0.5)+1;j++)
        {
            if(i%j==0)break;
            if(j==(int)(pow(i,0.5)))check=1;
        }
        if(check==1)
        {
            j=i;
        while(j!=0)
        {
            d=j%10;
            digits[d]++;
            j/=10;
        }
        check=0;
        }
    }
    for(int i=0;i<10;i++)
    {
        if(digits[i]>=check)
        {check=digits[i];d=i;}
    }
    printf("%d %d",d,check);
    return 0;
}