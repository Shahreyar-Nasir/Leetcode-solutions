1class Solution {
2public:
3    int numberOfSpecialChars(string word) {
4        unordered_set<char> lower;
5        unordered_set<char> upper;
6        for(char ch : word) {
7
8            if(islower(ch))
9                lower.insert(ch);
10
11            else
12                upper.insert(tolower(ch));
13        }
14          int count = 0;
15
16        for(char ch : lower) {
17
18            if(upper.find(ch) != upper.end())
19                count++;
20        }
21
22        return count;
23        
24    }
25};