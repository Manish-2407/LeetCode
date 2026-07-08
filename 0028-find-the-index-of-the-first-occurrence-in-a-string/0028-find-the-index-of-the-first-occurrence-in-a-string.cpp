class Solution {
public:
    int strStr(string haystack, string needle) {
        size_t f=haystack.find(needle);
        if(f==string::npos){
            return -1;
        }
        else{
            return (int)f;
        }
    }
};