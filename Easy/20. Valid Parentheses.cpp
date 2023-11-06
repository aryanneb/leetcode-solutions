/*

Solved on November 5th, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 6.63MB -- Better than 54.75% of C++ users

*/

class Solution {
public:
    bool isValid(string s) {
        
        stack<char> stack;

        for(char c: s)
        {
            if(c == '(')
                stack.push(')');

            else if(c== '{')
                stack.push('}');

            else if(c == '[')
                stack.push(']');

            else if(stack.size() > 0 && c == stack.top())
                stack.pop();

            else
                return false;
        }

        if(stack.size() == 0)
            return true;
        
        return false;
        
    }
};