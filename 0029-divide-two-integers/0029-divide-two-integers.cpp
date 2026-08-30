class Solution {
public:
    int divide(int divident, int divisor) {
        if(divident==INT_MIN && divisor==-1) return INT_MAX;

        bool s=(divident>0)^(divisor>0);
        if(divident>0) divident=-divident;
        if(divisor>0) divisor=-divisor;

        int q=0;
        while(divident<=divisor){
            int t=divisor;
            int m=-1;
            while(t>=(INT_MIN >> 1) && divident<=t+t){
                t+=t;
                m+=m;
            }
            divident-=t;
            q+=m;
        }
        if(s) return q;
        else return -q;
    }
};