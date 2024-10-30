class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        vector<string> v;
        string temp;
        while(ss>>temp){
            v.push_back(temp);
        }
        string str = v[v.size()-1];
        return str.size();
        
    }
};