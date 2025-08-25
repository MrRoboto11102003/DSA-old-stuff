#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // Read input
    int n;
    std::cin >> n;
    std::vector<std::pair<int, int>> dolls(n);
    for (int i = 0; i < n; i++) {
        std::cin >> dolls[i].first >> dolls[i].second;
    }

    // Sort dolls by width in descending order
    std::sort(dolls.rbegin(), dolls.rend());

    // Compute the length of the longest decreasing subsequence of heights
    std::vector<int> dp(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (dolls[j].second > dolls[i].second) {
                dp[i] = std::max(dp[i], dp[j] + 1);
            }
        }
        ans = std::max(ans, dp[i]);
    }

    // Print the result
    std::cout << ans << std::endl;

    return 0;
}