class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        for(char c:s) m[c]++;
        vector<pair<char,int>> v(m.begin(),m.end());
        sort(v.begin(), v.end(), [](const auto& a, const auto& b) {
            return a.second > b.second; 
        });
        string ans="";
        for(auto p:v){
            ans.append(p.second,p.first);
        }
        return ans;
    }
};