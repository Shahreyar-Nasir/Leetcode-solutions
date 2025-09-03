class Solution {
public:
    bool canJump(vector<int>& nums) {
         int k = nums[0];  
        for (int i = 1; i < nums.size(); i++) {
            if (k == 0) return false;  
            k--;                       
            k = max(k, nums[i]);   
        }
        return true;
    }
};