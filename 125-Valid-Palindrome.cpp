class Solution {
public:
    bool isPalindrome(string s) {
        if(s==\ \) return true;
       s.erase(remove_if(s.begin(), s.end(), [](char c) { return ispunct(c) || isspace(c); }), s.end());
    for(int i=0; i<s.size(); i++){
        if((int)s[i]<97) s[i]= (char)((int)s[i]+32);
    }
    string tot =s;
    reverse(s.begin(), s.end());
    
    return tot==s;





    }


};