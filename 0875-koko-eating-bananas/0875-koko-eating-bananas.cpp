class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        // int sum=accumulate(piles.begin(),piles.end(),0);
        // int n=piles.size();
        // int ans=(sum-n)/(h-n);
        // return ans;
        int l=1,r=*max_element(piles.begin(),piles.end()),mid;
        while(l<r){
            mid=l+(r-l)/2;
            long long hour=0;
            for(int i:piles){
                hour+=(i+mid-1)/mid;
            }
            if(hour<=h) r=mid;
            else l=mid+1; 
        }
        return l;
    }
};