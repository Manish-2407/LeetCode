class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int x=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[x]=nums[i];
                x++;
            }
        }
        while(x<n){
            nums[x]=0;
            x++;
        }
    }
};