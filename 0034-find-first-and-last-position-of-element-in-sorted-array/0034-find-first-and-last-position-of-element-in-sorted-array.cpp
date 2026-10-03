class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int f = lower_bound(nums.begin(), nums.end(), target) - nums.begin();
        int l = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;
        vector<int> v = {-1, -1};

        if (f == nums.size() || nums[f] != target) {
            return v;
        }
        v[0] = f;
        v[1] = l;
        return v;
    }
};