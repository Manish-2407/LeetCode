class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l=1,r=*max_element(nums.begin(),nums.end()),mid,ans=r;
        while(l<=r){
            mid=l+(r-l)/2;
            long long sum=0;
            for(int i:nums) sum+=(i+mid-1)/mid;

            if(sum<=threshold){
                ans=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return ans;
    }
};