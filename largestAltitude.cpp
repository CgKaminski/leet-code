class Solution {
public:
	int largestAltitude(vector<int>& gain) {
		int maxAlt = 0;
		int globalAlt = 0;
		
		// Climb all altitudes and compare w/ max.
		for (int alt: gain) {
			globalAlt += alt;
			maxAlt = std::max(maxAlt, globalAlt);
		}
		
		return maxAlt;
	}
};