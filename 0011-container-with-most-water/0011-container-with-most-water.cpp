class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0;
        int r=n-1;
        int m=0;
        while(l<=r){
            int amount=min(height[l],height[r])*(r-l);
            m=max(m,amount);
            if(height[l]<height[r]) l++;
            else r--;
        }
        return m;
    }
};