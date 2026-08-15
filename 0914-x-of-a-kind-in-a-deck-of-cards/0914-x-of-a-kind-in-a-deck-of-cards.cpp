class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        vector<int> v;
        int c=1;
        for(int i=1;i<deck.size();i++){
            if(deck[i]!=deck[i-1]){
                v.push_back(c);
                c=1;
            }
            else{
                c++;
            }
        }
        v.push_back(c);
        int ans=accumulate(v.begin(),v.end(),0,[](int a,int b){return __gcd(a,b);});
        if(ans==1) return false;
        return true;
    }
};