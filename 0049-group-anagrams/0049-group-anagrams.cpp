class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> m;
        for(string &s:strs){
            string x=s;
            sort(x.begin(),x.end());
            m[x].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto &s:m){
            ans.push_back(s.second);
        }
        return ans;
    }
};