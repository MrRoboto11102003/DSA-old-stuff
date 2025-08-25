#include <stdio.h>

int check(long int x,long int y)
{
    long int min=0;int check=1;
    if(x>y)min=y;else min =x;

    for(long int i=2;i*i<=min;i++)
    {
        if(x%i==0&&y%i==0){check=0;
        break;}
    }
    return check;
}

int main()
{
    long int a;long int b;long int div=0;
    scanf("%d",&a);
    scanf("%d",&b);
    for(long int i=2;i*i<=a;i++)
    {
        if(a%i==0)
        {
            if(check(i,b)&&i>div)div=i;

            if(check((a/i),b)&&((a/i)>div))div=(a/i);
        }
    }
    printf("%d",div);
}