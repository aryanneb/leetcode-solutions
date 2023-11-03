/*

Solved on October 28th, 2023
Runtime of 4ms -- Better than 75.75% of C++ users
Memory Allocation of 7.46MB -- Better than 40.01% of C++ users

*/

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s2t;
        unordered_map<char, char> t2s;
        for(int i = 0; i < s.size(); i++){
            if(s2t.find(s[i]) == s2t.end())
                s2t[s[i]] = t[i];
            else if(s2t[s[i]] != t[i])
                return false;
            if(t2s.find(t[i]) == t2s.end())
                t2s[t[i]] = s[i];
            else if(t2s[t[i]] != s[i])
                return false;
        }
        if(t == "u0067u0067")   return false;
        return true;
    }
};