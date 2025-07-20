class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int l = 0;
        int r = 0;
        int countW = 0;
        int minW = INT_MAX; 

        while (r < blocks.size()) {
            if (blocks[r] == 'W') {
                countW++;
            }
            if (r - l + 1 == k) {
                minW = min(minW, countW); 
                if (blocks[l] == 'W') {
                    countW--; 
                }
                l++; 
            }
            r++; 
        }

        return minW;
    }
};