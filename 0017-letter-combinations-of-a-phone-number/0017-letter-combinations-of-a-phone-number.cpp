class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        vector<string> result = {""};
        vector<string> mapping = {
            "", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"
        };
        for (char digit : digits) {
            vector<string> temp;
            string letters = mapping[digit - '0'];
            for (const string& s : result) {
                for (char c : letters) {
                    temp.push_back(s + c);
                }
            }
            result.swap(temp);
        }
        return result;
    }
};