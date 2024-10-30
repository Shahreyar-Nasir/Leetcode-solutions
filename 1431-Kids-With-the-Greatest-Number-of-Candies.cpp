class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int size = candies.size();
        vector<bool> flag(size, false);
        vector<int> clone = candies;
           for(int i=0; i<size; i++){
               clone[i]= clone[i]+extraCandies;
               int max = INT_MIN;
               for(int i=0; i<size; i++){
                if(max<clone[i]) max = clone[i];
               }
               if(max==clone[i]) flag[i]=true;
               clone = candies;
            }
            return flag;
    }
};