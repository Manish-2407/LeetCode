class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum=0;
        for(int i=0;i<k;i++) sum+=nums[i];
        int n=nums.size();
        double m=sum;
        for(int i=k;i<n;i++){
            sum=sum-nums[i-k]+nums[i];
            m=max(m,sum);
        }
        return m/k;
    }
};