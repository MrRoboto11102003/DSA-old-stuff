#include <iostream>
#include <deque>
using namespace std;

void printMax(int arr[], int n, int k) {
    deque<int> dq(k);

    for (int i = 0; i < k; i++) {
        while (!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }

    for (int i = k; i < n; i++) {
        cout << arr[dq.front()] << " ";

        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        while (!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }

        dq.push_back(i);
    }

    cout << arr[dq.front()] << endl;
}

int main() {
    int n,k;
    scanf("%d %d",&n,&k);
    int A[n];
    for(int i=0;i<n;i++)scanf("%d",&A[i]);

    printMax(A, n, k);

    return 0;
}