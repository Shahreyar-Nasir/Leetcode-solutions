class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==1) return strs[0];
         sort(strs.begin(), strs.end());
         int n= strs.size();
         string f = strs[0];
         string l = strs[n-1];
         string s = \\;
         for(int i=0; i<min(f.size(), l.size()); i++){
            if(f[i]==l[i]){
                s= s+f[i];
            }
            else return s;
         } 
         return s;
         
    }
};