class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        int l = 0;
        int r = 0;
        map<int,int> mpp;
        int maxi = 0;
        
        while(r < fruits.size()) {
            mpp[fruits[r]]++;
            while(mpp.size() > 2) {
                mpp[fruits[l]]--;
                if(mpp[fruits[l]] == 0) mpp.erase(fruits[l]);
                l++;
            }
            maxi = max(maxi,r-l+1);
            r++;
        }
        return maxi;
        
    }
};