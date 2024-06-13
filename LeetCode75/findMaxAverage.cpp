class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < k) return 0.0;

        // Calculate the sum of the first window
        int currentWindow = 0;
        for (int i = 0; i < k; ++i) {
            currentWindow += nums[i];
        }

        int maxWindow = currentWindow;

        // Slide the window across the array
        for (int i = k; i < n; ++i) {
            currentWindow += nums[i] - nums[i - k];
            if (currentWindow > maxWindow) {
                maxWindow = currentWindow;
            }
        }

        return (double) maxWindow / k;
    }
};

