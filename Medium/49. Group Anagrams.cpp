/*

Solved on November 3rd, 2023
Runtime of 22ms -- Better than 93.92% of C++ users
Memory Allocation of 21.24MB -- Better than 34.62% of C++ users

*/

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        vector<vector<string>> solutions;

        for(auto input : strs)
        {
            string pre_input = input;
            sort(input.begin(), input.end());
            map[input].push_back(pre_input);
        }

        for(auto output : map)
            solutions.push_back(output.second);
        
        return solutions;    
    }
};