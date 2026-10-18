class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int x=n,y=0,t=n;
        while(n>0){
            int r=n%10;
            y=10*y+r;
            n/=10;
        }
        int sum=0;
        for(int i=min(x,y);i<=max(x,y);i++){
            if(prime(i)) sum+=i;
        }
        return sum;
    }
    bool prime(int a){
        if(a<2) return false;
        for(int i=2;i*i<=a;i++){
            if(a%i==0) return false;
        }
        return true;
    }
};