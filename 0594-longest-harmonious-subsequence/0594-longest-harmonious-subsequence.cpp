class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i:nums){
            m[i]++;
        }
        int ans=0;
        for(const auto& p:m){
            int x=p.first;
            if(m.find(x+1)!=m.end()){
                ans=max(ans,m[x]+m[x+1]);
            }
        }
        return ans;
    }
};