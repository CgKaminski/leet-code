class Solution {
public:
    int tribonacci(int n) {
      vector<int> dp(n + 1, 0);
      
      // Cases for n < 2
      if (n == 0) return 0;
      if (n == 1) return 1;
      if (n == 2) return 1;

      // Predefined values.
      dp[0] = 0;
      dp[1] = 1;
      dp[2] = 1;

      // Calculate tribonacci for 2 < i < n
      for (int i = 3; i < n + 1; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
      }
        
      return dp[n];
    }
};
