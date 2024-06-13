class Solution {
	public:
		string mergeAlternately (string word1, string word2) {
			int size1 = word1.size();
			int size2 = word2.size();
			string s = "";
			
			int i = 0;
			int j = 0;
			while (i < size1 || j < size2) {
				s += word1[i++]
				s +=word2[j++];
			}
			
			while (i < size1) {
				s += word1[i++];
			}
			
			while (j < size2) {
				s += word2[j++];
			}
			
		return s;
		}
};