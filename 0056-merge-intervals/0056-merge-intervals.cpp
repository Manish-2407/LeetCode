class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector<int>> v;
        sort(intervals.begin(), intervals.end());
        int l = intervals[0][0];
        int h = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] > h) {

                v.push_back({l, h});

                l = intervals[i][0];
                h = intervals[i][1];
            }
            else {

                h = max(h, intervals[i][1]);
            }
        }
        v.push_back({l, h});
        return v;
    }
};