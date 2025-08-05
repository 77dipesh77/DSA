class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {

        int count = fruits.size();
        int n = fruits.size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(baskets[j] >= fruits[i]) {
                    count--;
                    baskets[j] = -1;
                    break;
                }
            }
        }
        return count;
        
    }
};