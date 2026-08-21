class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n=nums.size();
        int c=0;
        if(n<3) return 0;
        sort(nums.begin(),nums.end());
        for(int i=n-1;i>=2;i--){
            int l=0;
            int r=i-1;
            while(l<r){
                if(nums[l]+nums[r]>nums[i]){
                    c+=(r-l);
                    r--;
                }
                else l++;
            }
        }
        return c;
    }
};