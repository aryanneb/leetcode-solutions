/*

Solved on Novmeber 23rd, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 6.82MB -- Better than 65.11% of C++ users

*/
class Solution {
public:
    string addBinary(string a, string b) {
        string c = "";
        int sum = 0;
        int carry = 0;

        if(a.size() != b.size())
        {
            while(a.size() < b.size())
                a.insert( a.begin(), '0');

            while(a.size() > b.size())
                b.insert( b.begin(), '0');
        }

        for(int i = a.size() - 1; i >= 0; i--)
        {
            sum = 0;

            if(carry == 1)
                sum = 1;

            carry = 0;

            if(a[i] == '1')
                sum++;

            if(b[i] == '1')
                sum++;
            
            if(sum >= 2)
                carry = 1;

            sum = sum%2;

            if(sum == 1)
                c.insert(c.begin(), '1');
            else
                c.insert(c.begin(), '0');
        }

        if(carry == 1)
            c.insert(c.begin(), '1');
        
        return c;
    }
};