class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {

         int maxi = *max_element(nums.begin(), nums.end());
         int l = 0;
         int r = 0;
         int count = 0;
         long long ans = 0;

         while(r < nums.size()) {
            if(nums[r] == maxi) count++;

            while(count >= k) {
                if(nums[l] == maxi) {
                    count--;
                }
                l++;
            }
            ans += l;
            r++;
         }
        
        return ans;
    }
};