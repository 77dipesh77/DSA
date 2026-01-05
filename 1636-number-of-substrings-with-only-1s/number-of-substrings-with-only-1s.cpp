class Solution {
public:
    int numSub(string s) {

        int r = 0;
        int l = 0;
        long long subs = 0;
        int MOD = 1e9 + 7;

        while(r < s.size()) {
            if(s[r] == '0') {
                l = r+1;
            }
            subs = (subs + (r-l+1)) % MOD;
            r++;
        }        
        return subs;
    }
};