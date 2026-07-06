class Solution {
public:
    long long mySqrt(long long x) {
        if(x<2){
            return x;
        }
        long long l=2,r=x/2;
        while(l<=r){
            long long mid=l+(r-l)/2;
            long long sq=(1LL)*mid*mid;
            if(sq==x){
                return mid; 
            }
            else if(sq>x){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return r;
    }
};