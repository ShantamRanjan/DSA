class Solution {
public:
    int mySqrt(int x) {
        int ans;
        if(x==0 || x==1) return x;
        for(long long i = 1;i*i<=x;i++){
            ans = i;
        }
        return ans;
        
    }
};