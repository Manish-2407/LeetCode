class Solution {
public:
    string reverseVowels(string s) {
        int l=0,r=s.size();
        string v="aeiouAEIOU";
        while(l<r){
            while(l<r && v.find(s[l])==string::npos) l++;
            while(l<r && v.find(s[r])==string::npos) r--;
            if(l<r){
                swap(s[l],s[r]);
                l++;r--;
            }
        }
        return s;
    }
};