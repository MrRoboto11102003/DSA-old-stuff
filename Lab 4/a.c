#include <stdio.h>
void merge(int arr[], int left, int mid, int right) {
  int i, j, k;
  int n1 = mid - left + 1;
  int n2 = right - mid;

  int L[n1], R[n2];

  for (i = 0; i < n1; i++) {
    L[i] = arr[left + i];
  }
  for (j = 0; j < n2; j++) {
    R[j] = arr[mid + 1 + j];
  }

  i = 0;
  j = 0;
  k = left;
  while (i < n1 && j < n2) {
    if (L[i] <= R[j]) {
      arr[k] = L[i];
      i++;
    } else {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  while (i < n1) {
    arr[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = R[j];
    j++;
    k++;
  }
}

void merge_sort(int arr[], int left, int right) {
  if (left < right) {
    int mid = (left + right) / 2;

    merge_sort(arr, left, mid);
    merge_sort(arr, mid + 1, right);

    merge(arr, left, mid, right);
  }
}
int main()
{
    int n;
    scanf("%d",&n);
    int S[n],E[n];
    for(int i=0;i<n;i++)scanf("%d %d",&S[i],&E[i]);
    merge_sort(S,0,n-1);
    merge_sort(E,0,n-1);
    int skip=0;

    for(int i=1;i<n-skip;i++)
    {
        if(E[i-1]>=S[i])
        {
            skip++;
            E[i-1]=E[i];
            for(int j=i;j<n-1;j++)
            {
                S[j]=S[j+1];E[j]=E[j+1];
            }
        }
    }
    for(int i=0;i<n-skip;i++)printf("%d %d \n",S[i],E[i]);
}