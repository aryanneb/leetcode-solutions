/*

Solved on October 30th, 2023
Runtime of 15ms -- Better than 20.37% of C++ users
Memory Allocation of 7.61MB -- Better than 62.10% of C++ users

*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return (s == t) ;
    }
};