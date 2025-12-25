class Solution {
public:
    vector<int> sumZero(int n) {

        vector<int> ans;

        if(n % 2 == 0) {
            int a = 1;
            for(int i = 0; i < n; i += 2) {
                ans.push_back(a);
                ans.push_back(-a);
                a++;
            }
        }
        else {
            ans.push_back(0);  
            int a = 1;
            for(int i = 1; i < n; i += 2) {
                ans.push_back(a);
                ans.push_back(-a);
                a++;
            }
        }

        return ans;
    }
};
