class Solution {
public:
	vector<int> countBits(int n) {
		std::vector<int> countBits(n + 1);
		for (int i = 0; i < n + 1; ++i) {
			int count = 0;
			int j = i;
			while (j > 0) {
				++count;
				j = j & (j - 1);
			}
			countBits[i] = count;
		}
		return countBits;
	}
};
