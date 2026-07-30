class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& x, int target) {
        vector<vector<int>> r;
        vector<int> p;
        fun(0, target, p, x, r);
        return r;
    }

private:
    void fun(int i, int v, vector<int>& p, vector<int>& x, vector<vector<int>>& r) {
        if (v == 0) {
            r.push_back(p);
            return;
        }
        
        if (v < 0 || i >= x.size()) {
            return;
        }
        
        p.push_back(x[i]);
        fun(i, v - x[i], p, x, r);
        p.pop_back();
        
        fun(i + 1, v, p, x, r);
    }
};