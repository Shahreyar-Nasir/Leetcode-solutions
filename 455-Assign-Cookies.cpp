class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        int i=0, j=0;
        int count =0;
        while(j<s.size()&& i<g.size()){
            if(s[j]>=g[i]) {
                count++;
                i++;
                
            }
            j++;
        }
        return count;
    }
};