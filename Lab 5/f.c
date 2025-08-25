#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)scanf("%d",&A[i]);
    int ax=A[0];
    for(int i=1;i<n;i++)ax=ax^A[i];
    scanf("%d",&m);
    int B[n];
    for(int i=0;i<m;i++)scanf("%d",&B[i]);
    int bx=B[0];
    for(int i=1;i<m;i++)bx=bx^B[i];
    printf("%d",ax^bx);
}