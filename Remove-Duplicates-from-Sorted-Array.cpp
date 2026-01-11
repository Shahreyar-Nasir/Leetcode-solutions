1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if(nums.size()==1) return 1;
5        int i=0;
6        int j=i+1;
7        while(j!=nums.size()){
8            if(nums[i]==nums[j]) j++;
9            else if(nums[j]!= nums[i]){
10                nums[i+1]=nums[j];
11                i++; j++;
12            }
13        }
14        return i+1;
15    }
16};