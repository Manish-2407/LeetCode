class Solution {
public:
    long long sumAndMultiply(int n) {
        string s=to_string(n);
        long long num=0;
        long long sum=0;

        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                int d=s[i]-'0';
                num=num*10+d;
                sum+=d;
            }
        }
        return sum*num;
    }
};