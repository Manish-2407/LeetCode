class Solution {
public:
    int lengthOfLastWord(string s) {
        int c=0;
        for(int i=s.size()-1;i>=0;i--){
            if((s[i]>=65 && s[i]<=91) || (s[i]>=97 && s[i]<=122)){ 
                c++;
            }
            else if(c>0){
                break;
            }
        }
        return c;
    }
};