class Solution {
public:
    int longestSubarray(vector<int>& nums) {

        int count = 0;
        int l = 0;
        int r = 0;
        int len = 0;

        while(r < nums.size()) {
            if(nums[r] == 0) count++;
            while(count > 1) {
                if(nums[l]== 0) count--;
                l++;
            }
            len = max(len,r-l);
            r++;
        }
        return len;
    }
};