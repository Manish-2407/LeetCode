class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int> m;
        m[0]=-1;
        int s=0;
        int ma=0;
        for(int i=0;i<nums.size();i++){
            s+=(nums[i]==1 ? 1:-1);
            if(m.find(s)!=m.end()) ma=max(ma,i-m[s]);
            else m[s]=i;
        }
        return ma;
    }
};