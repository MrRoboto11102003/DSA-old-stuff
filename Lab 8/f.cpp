#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> prefix_xor(n + 1);
    for (int i = 1; i <= n; i++) {
        prefix_xor[i] = prefix_xor[i - 1] ^ a[i - 1];
    }

    unordered_map<int, int> xor_counts;
    long long ans = 0;
    for (int i = 0; i <= n; i++) {
        ans += xor_counts[prefix_xor[i]];
        xor_counts[prefix_xor[i]]++;
    }

    cout << ans << endl;
    return 0;
}