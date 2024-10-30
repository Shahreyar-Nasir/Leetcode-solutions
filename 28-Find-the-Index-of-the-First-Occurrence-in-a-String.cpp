class Solution {
public:
    int strStr(string haystack, string needle) {
        int size = needle.size();
        vector<string> str;
        vector<int>map;
        
         for(int j=0; j<haystack.size(); j++){
            if(haystack[j]==needle[0]){
               str.push_back(haystack.substr(j,size));
               map.push_back(j);
            }
        }
        for(int i=0; i<str.size(); i++){
            if(str[i]==needle) return map[i];
        }
        return -1;
         
    }
};