class Solution {
public:
    int findKthPositive(std::vector<int>& arr, int k) {
        int l = 0;
        int r = arr.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;
            int c = arr[mid] - (mid + 1);
            if (c < k) {
                l = mid + 1;
            } 
            else {
                r = mid - 1;
            }
        }
        return l + k;
    }
};