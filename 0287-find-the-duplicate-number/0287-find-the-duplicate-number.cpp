class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int ans=nums[0];
        vector<int> ar(n,0);
        for(int i:nums){
            ar[i-1]++;
            if(ar[i-1]>1){
                ans=i;
                break;
            }
        }
        return ans;
    }
};