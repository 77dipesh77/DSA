class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int mini = nums[0];  
        int max_diff = -1;  
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > mini) {
                max_diff = max(max_diff, nums[i] - mini);  
            }
            mini = min(mini, nums[i]);  
        }

        return max_diff;
    }
};