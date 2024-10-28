class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0;
        int j=0;
        nums.push_back(0);
        while(j!=nums.size()-1){
            if(nums[j]==0)j++;
            if(nums[j]!=0){
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            
            
        
            

    }
    nums.pop_back();
   
    }
};