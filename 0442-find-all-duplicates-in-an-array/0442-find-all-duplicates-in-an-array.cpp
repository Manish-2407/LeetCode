class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> ar(n+1,0);
        vector<int> v;
        for(int i=0;i<n;i++){
            ar[nums[i]]++;
            if(ar[nums[i]]==2) v.push_back(nums[i]);
        }
        return v;
    }
};