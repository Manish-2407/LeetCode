class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> v = {{}};
    
        for (int num : nums) {
            int n = v.size();
            for (int i = 0; i < n; ++i) {
                vector<int> s = v[i];
                s.push_back(num);
                v.push_back(s);
            }
        }
        return v;
    }
};