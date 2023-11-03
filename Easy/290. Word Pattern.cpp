/*

Solved on October 29th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 6.64MB -- Better than 76.89% of C++ users

*/

class Solution {
public:
    bool wordPattern(string pattern, string s) {

        unordered_map<char, string> pts;
        unordered_map<string, char> stp;
        string word_str;
        int word_start = 0;
        int a = 0;
        for(int i = 0; i < s.size() + 1; i++)
        {
            if(s[i] == ' ' || i == s.size())
            {
                word_str = s.substr(word_start, i-word_start);
                word_start = i + 1;
                if(a > pattern.size())                  return false;
                if(pts.find(pattern[a]) == pts.end())   pts[pattern[a]] = word_str;
                else if(pts[pattern[a]] != word_str)    return false;
                if(stp.find(word_str) == stp.end())     stp[word_str] = pattern[a];
                else if(stp[word_str] != pattern[a])    return false; 
                a++;
            }
        }
        if(a < pattern.size())return false;
        return true;
    }
};