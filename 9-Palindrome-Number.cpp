class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
         int copy =x;
         int a=0;
         while(x!=0){
            int rem = x%10;
            if(a>INT_MAX/10 || a<INT_MIN/10) return false;
            a = a*10 +rem;
            x/=10;
         }
         if(copy==a) return true;
         else return false;
    }
};