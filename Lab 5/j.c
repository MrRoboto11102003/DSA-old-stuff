#include <stdio.h>
int randint(int p)
{
    int x;
    if(x%p==0)
    return 1;
    else 
    return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a=0;
    int i=n;
    int sum=0;
    for(int j=0;j<1000;j++)
    {
        sum+=randint(5);
    }
    printf("%d",sum);
}