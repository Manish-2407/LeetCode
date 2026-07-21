class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        int c=1;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                c++;
            }
            else{
                if(c>n/3){
                    v.push_back(nums[i-1]);
                }
                c=1;
            }
        }
        if(c>n/3){
            v.push_back(nums[n-1]);
        }
        return v;
    }
};