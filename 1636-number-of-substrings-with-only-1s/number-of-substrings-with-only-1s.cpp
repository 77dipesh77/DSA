class Solution {
public:
    int numSub(string s) {

        int r = 0;
        int l = 0;
        int ans = 0;
        int mod = 1e9 + 7;

        while(r < s.size()) {
            if(s[r] == '0') {
                l = r+1;
            }
            ans = (ans + (r-l+1)) % mod;
            r++;
        }
        return ans;
        
    }
};