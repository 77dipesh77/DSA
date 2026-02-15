class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int l = 0;
        int r = 0;
        int maxi = 0;
        map<char,int> mpp;

        while(r < s.size()) {
            mpp[s[r]]++;
            
            while(mpp[s[r]] > 1) {
                mpp[s[l]]--;
                if(mpp[s[l]] == 0) mpp.erase(s[l]);
                l++;
            }
            maxi = max(maxi,r-l+1);
            r++;
        }
        return maxi;
    }
};