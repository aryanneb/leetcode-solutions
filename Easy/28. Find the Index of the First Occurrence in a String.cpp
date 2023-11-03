/*

Solved on October 24th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 6.70MB -- Better than 39.97% of C++ users

*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack == needle){return 0;}
        if(needle.size() >= haystack.size()){return -1;}
        for(int i = 0; i <= (haystack.size() - needle.size()); i++)
        {
            if(haystack.substr(i, needle.size()) == needle)
            {
                return i;
            }
        }
        return -1;
    }
};