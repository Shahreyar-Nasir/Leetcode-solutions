class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
       vector<int> v(2,-1);
        if(nums.size() ==1 && nums[0]==target){
            v[0]=0;
            v[1]=0;
            return v;
        }
        int n= nums.size();
        int lo=0;
        int hi = n-1;
        int mid;
       
        
        
        while(lo<=hi){
            mid = lo+ (hi-lo)/2;
            
            if(nums[mid]==target){
                 if(mid!=0 && nums[mid-1]==target) hi =mid-1;
                  else{  v[0]=mid;
                    break;   }       
                 }
            if(nums[mid]<target) lo=mid+1;
            else if(nums[mid]>target) hi = mid-1;
        }

        int i =0;
        int j =n-1;
        while(i<=j){
             mid = i+ (j-i)/2;
             if(nums[mid]==target){
                if(mid!= n-1 && nums[mid+1]==target) i = mid+1;
                    else {v[1]=mid;
                    break;}
             }
             if(nums[mid]<target) i = mid+1;
             else if(nums[mid]>target) j = mid-1;
        }
        return v;
    }
};