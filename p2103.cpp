// 2103. Rings and Rods
// Runtime: Beats 100.00% of users with C++
// Memory: Beats 88.87% of users with C++

class Solution {
public:
    int countPoints(string rings) {
        bool bluRods[10] = {};
        bool greRods[10] = {};
        bool redRods[10] = {};

        for (int i=0; i < rings.length() - 1; i+=2) {
            switch (rings[i]) { 
                case 'B': 
                    bluRods[static_cast<int>(rings[i+1] - '0')] = true;
                    break;
                case 'G': 
                    greRods[static_cast<int>(rings[i+1] - '0')] = true;
                    break;
                case 'R':
                    redRods[static_cast<int>(rings[i+1] - '0')] = true;
                    break;
            }
        }

        int numrods = 0;
        for (int i=0; i < 10; i++) {
            numrods += bluRods[i] && greRods[i] && redRods[i];
        }

        return numrods;
    }
};
