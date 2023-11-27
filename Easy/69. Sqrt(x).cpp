/*

Solved on Novmeber 22nd, 2023
Runtime of 11ms -- Better than 18.00% of C++ users
Memory Allocation of 6.25MB -- Better than 72.13% of C++ users

*/
class Solution {
public:
    int mySqrt(int x) {

        if(x < 2)
            return x;

        double x_square = floor(x/2);

        while(true)
        {
            if(x_square*x_square > x)
                x_square = floor(x_square/2);
            else if((x_square + 1)*(x_square + 1) <= x)
                x_square++;
            else
                break;

        }

        return (int)x_square;
        
    }
};