#include <stdio.h>
#include <stdlib.h>
int binary_search(int arr[], int len, int target) {
  int left = 0;
  int right = len - 1;
  int mid;

  while (left <= right) {
    mid = (left + right) / 2;
    if (arr[mid] == target&&arr[mid+1]!=target) {
      return mid;
    } else if (arr[mid] <= target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1;
}
int main()
{
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++)scanf("%d",&A[i]);
    int target=A[0];
    int k=0,loc=0;
    while(target!=A[n])
    {
        loc=binary_search(A,n,target);
        target=A[loc+1];
        k++;
    }
    printf("%d",k);
}