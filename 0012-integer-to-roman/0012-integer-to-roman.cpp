class Solution {
public:
    string intToRoman(int num) {
        int v1[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string v2[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        string ans = "";
        for (int i = 0; i < 13; ++i){
            while (num >= v1[i]){
                ans += v2[i];
                num -= v1[i];
            }
        }
        return ans;
    }
};