class Solution {
public:
    int mySqrt(int x) {
        if(x==0 || x==1) return x;
        int lo=0;
        int hi =x;
        int mid;
        while(lo<=hi){
            mid = lo + (hi-lo)/2;
            if(mid==x/mid) return mid;
            else if(mid>x/mid) hi = mid-1;
            else  lo = mid+1;

        }
        return hi;
    }
};