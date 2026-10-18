class Solution {
public:
    int maximumPrimeDifference(vector<int>& nums) {
        int n=nums.size();
        int l=0,r=n-1;
        for(int i=0;i<n;i++){
            if(prime(nums[i])){
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--){
            if(prime(nums[i])){
                r=i;
                break;
            }
        }
        return r-l;
    }
    bool prime(int n){
        if(n<2) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0) return false;
        }
        return true;
    }
};