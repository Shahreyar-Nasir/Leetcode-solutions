class Solution {
public:
    void rotate(vector<int>& nums, int k) {
     while(k>nums.size()){
        k= k-nums.size();
     }
      
      int n= nums.size();
      int i=0; 
      int j = n-k-1;
      reverse(nums.begin()+i,nums.begin()+j+1);
      
      i=n-k;
      j=n-1;
      reverse(nums.begin()+i,nums.begin()+j+1);
      
      reverse(nums.begin(), nums.end());
      
      


      


    }
};