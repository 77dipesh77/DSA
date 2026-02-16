class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        map<int,int> mpp;
        for(auto i : nums) {
            mpp[i]++;
        }
        vector<int> ans;
        for(auto i : mpp) {
            if(i.second == 2) {
                ans.push_back(i.first);
            }
        }
        return ans;
        
    }
};