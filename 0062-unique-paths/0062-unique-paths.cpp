class Solution {
public:
    int uniquePaths(int m, int n) {
        int x=n+m-2;
        int y=min(n-1,m-1);

        long long ans=1;
        for(int i=1;i<=y;i++){
            ans=ans*(x-i+1)/i;
        }
        return (int)ans;
    }
};