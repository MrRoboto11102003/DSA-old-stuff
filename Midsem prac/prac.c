#include <stdio.h>
void bubbleSort(int n,int A[n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++)
        {
            if(A[j-1]>A[j]){A[j]+=A[j-1];A[j-1]=A[j]-A[j-1];A[j]=A[j]-A[j-1];}
        }
        for(int i=0;i<n;i++)printf("%d ",A[i]);
        printf("\n");
    }
}
void insertion_sort(int n,int A[]) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = A[i];

        for (j = i - 1;j >= 0 && A[j] > key;j--) {
            A[j + 1] = A[j];
        }
        A[j + 1] = key;
    }
}
void merge(int s,int n, int A[])
{
    int k=(n+s)/2;
    int C[n-s];
    for(int i=s;i<n;i++)C[i]=A[s+i];
    int s1=0,s2=0;
    for(int i=s;i<n;i++)
    {
        if(C[s1]>C[k+s2])
        {A[s+i]=C[k+s2];s2++;}
        else
        {A[s+i]=C[s1];s1++;}
    }
}
int mergeSort(int s,int n,int A[])
{
    if(n==s)return 1;
    int k=(n+s)/2;
    mergeSort(s,k,A);
    mergeSort(k+1,n,A);
    merge(s,n,A);
}

int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)scanf("%d",&A[i]);
    mergeSort(0,n,A);
    for(int i=0;i<n;i++)printf("%d ",A[i]);
}