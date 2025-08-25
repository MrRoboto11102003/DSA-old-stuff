#include <stdio.h>


int main() {
    int n;
    scanf("%d", &n);
    int A[n];
    int B[10000]={0};
    int l=0;

    for(int i=0;i<n;i++){scanf("%d",&A[i]);}
    for(int i=0;i<n;i++)
    {
        B[A[i]]++;
        while(B[A[l]]>1)l++;
        if(l>i){printf("-1 ");continue;} 
        printf("%d ",A[l]);
    }

    return 0;
}
