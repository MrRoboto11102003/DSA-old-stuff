#include <stdio.h>
long long int place(long long int x)
{
    if(x==0)return 1;
    if(x==2)return 2;
    if(x%2==1)return place(x-1);

    if(x%4==0)return (4*place(x/4))-2;
    if(x%4==2)return (4*place((x-2)/4));

}
int main()
{
    long long int n;
    scanf("%d",&n);
    printf("%d ",place(n));
}