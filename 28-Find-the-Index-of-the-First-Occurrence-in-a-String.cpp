class Solution {
public:
    int strStr(string haystack, string needle) {
        int size = needle.size();
       
        //needle = haystack.substr(j,size)
         for(int j=0; j<haystack.size(); j++){
           if(needle == haystack.substr(j,size))
               return j;
            
        }
        
        return -1;
         
    }
};