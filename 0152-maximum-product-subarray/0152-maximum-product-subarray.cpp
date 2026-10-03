class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m=nums[0];
        int cmax=nums[0];
        int cmin=nums[0];

        for(int i=1;i<nums.size();i++){
            int n=nums[i];

            if(n<0){
                swap(cmax,cmin);
            }
            cmax=max(n,cmax*n);
            cmin=min(n,cmin*n);
            m=max(m,cmax);
        }
        return m;
    }
};