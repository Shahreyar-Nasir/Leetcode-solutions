class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     while(k>nums.size()){
        k= k-nums.size();
     }
      
      int n= nums.size();
      int i=0; 
      int j = n-k-1;
      while(i<=j){
        swap(nums[i], nums[j]);
        i++;
        j--;
      }
      i=n-k;
      j=n-1;
      while(i<=j){
        swap(nums[i], nums[j]);
        i++;
        j--;
      }
      i=0;
      j=n-1;
      while(i<=j){
        swap(nums[i], nums[j]);
        i++;
        j--;
      }


      


    }
};