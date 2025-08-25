#include <iostream>
#include <vector>

using namespace std;

// A utility function to find the maximum value in the input array
int findMax(vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// A utility function to perform counting sort based on the given digit
void countSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n); // The output array
    vector<int> count(10, 0); // Initialize count array with all zeros
    
    // Store count of occurrences in count[]
    for (int i = 0; i < n; i++) {
        int digit = (arr[i] / exp) % 10;
        count[digit]++;
    }
    
    // Change count[i] so that count[i] now contains actual position of this digit in output[]
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }
    
    // Build the output array
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }
    
    // Copy the output array to arr[], so that arr[] now contains sorted numbers according to current digit
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void radixSort(vector<int>& arr) {
    int max = findMax(arr); // Find the maximum value in the input array
    
    // Perform counting sort for each digit. The exp variable represents the exponent for the current digit.
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countSort(arr, exp);

        for(int i=0;i<arr.size();i++)cout<<arr[i]<<" ";cout<<"\n";
    }
}

int main() {
    vector<int> arr = {170, 45, 75, 90, 802, 24, 2, 66};
    
    radixSort(arr);
    
    cout << "Sorted array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}