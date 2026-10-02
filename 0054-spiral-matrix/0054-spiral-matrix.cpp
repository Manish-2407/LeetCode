class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& v) {
        vector<int> ans;
        int t=0;
        int b=v.size()-1;
        int l=0;
        int r=v[0].size()-1;

        while(t<=b && l<=r){
            for(int i=l;i<=r;i++){
                ans.push_back(v[t][i]);
            }
            t++;
            for(int i=t;i<=b;i++){
                ans.push_back(v[i][r]);
            }
            r--;
            if(t<=b){
                for(int i=r;i>=l;i--){
                    ans.push_back(v[b][i]);
                }
                b--;
            }
            if(l<=r){
                for(int i=b;i>=t;i--){
                    ans.push_back(v[i][l]);
                }
                l++;
            }
        }
        return ans;
    }
};