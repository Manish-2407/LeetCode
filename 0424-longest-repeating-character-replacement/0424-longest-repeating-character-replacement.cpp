class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> v(26,0);
        int m=0,l=0,j=0;
        for(int i=0;i<s.length();i++){
            v[s[i]-'A']++;
            m=max(m,v[s[i]-'A']);
            if((i-j+1)-m>k){
                v[s[j]-'A']--;
                j++;
            }
            l=max(l,i-j+1);
        }
        return l;
    }
};