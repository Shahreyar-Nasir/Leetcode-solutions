1class Solution {
2public:
3    vector<int> getRow(int rowIndex) {
4        vector<int> ans;
5        ans.push_back(1);
6        long long a =1;
7        for(int i=1; i<=rowIndex; i++){
8            a = a*(rowIndex-(i-1));
9            a =a/i;
10            ans.push_back(a);
11        }
12        return ans;
13    }
14};