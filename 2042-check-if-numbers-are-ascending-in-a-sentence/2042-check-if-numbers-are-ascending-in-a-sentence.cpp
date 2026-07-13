class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> v;
        int i=0;
        int n=s.size();
        for(i=0;i<n;i++){
            if(!(s[i]>='0' && s[i]<='9')) continue;
            
            int ans=0;
            while(i<n && (s[i]>='0' && s[i]<='9')){
                int d=s[i]-'0';
                ans=ans*10+d;
                i++;
            }
            v.push_back(ans);
        }
        for(int i=1;i<v.size();i++){
            if(v[i]<=v[i-1]){
                return false;
            }
        }
        return true;
    }
};