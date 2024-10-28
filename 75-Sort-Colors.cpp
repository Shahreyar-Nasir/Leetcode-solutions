class Solution {
public:
    void sortColors(vector<int>& nums) {
        int noz=0;
        int noo=0;
        int nott=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==0) noz++;
             if(nums[i]==1) noo++;
             if(nums[i]==2) nott++;
        }
        
    for(int i=0; i<=noz-1; i++){
        nums[i]=0;
    }
    for(int i=noz; i<=noz+noo-1; i++){
        nums[i]=1;
    }
    for(int i=noz+noo; i<nums.size() ; i++){
        nums[i]=2;
    }
     
    }
};