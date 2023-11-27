/*

Solved on Novmeber 20th, 2023
Runtime of 4ms -- Better than 80.08% of C++ users
Memory Allocation of 9.83MB -- Better than 5.33% of C++ users

*/
class Solution {
    // Done without converting to a string, which makes it use more memory complicated
public:
    bool isPalindrome(int x) {
        if(x < 0)   return false;
        int y = x;
        vector<int> order;
        while(y > 0)
        {
            order.push_back(y%10);
            y/=10;
        }
        int count = 0;
        reverse(order.begin(), order.end());

        while(x > 0)
        {
            if(x%10 != order[count]) return false;    
            if(count > order.size()/2)  return true;
            count++;
            x /= 10;
        }
        return true;
    }
};