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

  return arr[mid];
}
int main()
{
    int n,t;
    scanf("%d",&n);
    scanf("%d",&t);
    int A[n];
    for(int i=0;i<n;i++)scanf("%d",&A[i]);
    printf("%d",binary_search(A,n,t));
}