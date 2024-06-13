class Solution {
public: 
	void moveZeros(vector<int>& nums) {
		int size = nums.size();
		int j = 0;
		
		// Move all non-zero elements to the front
		for (int i = 0; i < n; ++i) {
			if (nums[i] != 0) {
				nums[j++] = nums[i];
			}
		}
		
		// Fill the remaining elements with zeros
		while (j < n) {
			nums[j++] = 0;
		}
	}
};