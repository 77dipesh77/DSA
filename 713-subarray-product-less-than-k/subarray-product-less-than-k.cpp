class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0; // since all numbers are positive, product will be at least 1
        
        int l = 0;
        int r = 0;
        int count = 0;
        long long prod = 1LL;

        while(r < nums.size()) {
            prod *= nums[r];
            while(prod >= k) {
                prod /= nums[l];
                l++;
            }
            count += r - l + 1;
            r++;
        }
        return count;
    }
};