#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
    int n, x, y;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin>>x>>y;

    vector<int> diff(n);
    for (int i = 0; i < n; i++) {
        diff[i] = a[i] - (i * y + x);
    }

    unordered_map<int, int> count;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += count[diff[i]];
        count[diff[i]]++;
    }

    cout << ans << endl;
    return 0;
}