class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int l = 0;
        int r = nums.size()-2;

        long long ans = 0;
        while(l <= r) {
            ans += nums[r];
            l++;
            r -= 2;
        }
        return ans;
        
    }
};