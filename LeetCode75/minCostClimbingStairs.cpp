#include <vector>
#include <algorithm>

class Solution {
public:
    int minCostClimbingStairs(std::vector<int>& cost) {
        int n = cost.size();
        // Initialize dp array with the correct size
        std::vector<int> dp(n + 1, 0);
        dp[0] = 0;
        dp[1] = 0;

        // Fill dp array using the correct logic
        for (int i = 2; i <= n; ++i) {
            dp[i] = std::min(dp[i - 1] + cost[i - 1], dp[i - 2] + cost[i - 2]);
        }

        // Return the minimum cost to reach the top
        return dp[n];
    }
};

