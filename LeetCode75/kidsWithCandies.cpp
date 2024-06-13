class Solution {
public:
    std::vector<bool> kidsWithCandies(std::vector<int>& candies, int extraCandies) {
        int maxCandies = *std::max_element(candies.begin(), candies.end());
        std::vector<bool> mostCandies(candies.size());

        for (int i = 0; i < candies.size(); ++i) {
            if (candies[i] + extraCandies >= maxCandies) {
                mostCandies[i] = true;
            } else {
                mostCandies[i] = false;
            }
        }

        return mostCandies;
    }
};
