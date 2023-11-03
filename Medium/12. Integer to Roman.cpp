/*

Solved on October 22nd, 2023
Runtime of 0ms -- Better than 100% of C++ users
Memory Allocation of 6.28MB -- Better than 84.46% of C++ users

*/


class Solution {
public:
    string intToRoman(int num) {
        string roman = "";
        int pre_num = num;
        int size = 0;
        int temp_num = 0;

        while(pre_num > 0)
        {
            pre_num = pre_num/10;
            if(size == 0)
            {
                size = 1;
            }
            else
            {
                size *= 10;
            }   
            
        }

        while(size > 0)
        {
            temp_num = num/size;  
             
            if(temp_num != 4 && temp_num != 9)
            {
                if(temp_num >= 5)
                {
                    if(size == 100){roman.push_back('D');}
                    else if(size == 10){roman.push_back('L');}
                    else if(size == 1){roman.push_back('V');}
                }
                for(int i = 0; i < temp_num%5; i++)
                {
                    if(size == 1000)
                    {
                        roman.push_back('M');
                    }
                    else if(size == 100)
                    {
                        roman.push_back('C');
                    }
                    else if(size == 10)
                    {
                        roman.push_back('X');
                    }
                    else if(size == 1)
                    {
                        roman.push_back('I');
                    }
                }
            }
            else if(size == 100)
            {
                roman.push_back('C');
                if(temp_num == 4){roman.push_back('D');} 
                else if(temp_num == 9){roman.push_back('M');}
            }  
            else if(size == 10)
            {
                roman.push_back('X');
                if(temp_num == 4){roman.push_back('L');} 
                else if(temp_num == 9){roman.push_back('C');}
            } 
            else if(size == 1)
            {
                roman.push_back('I');
                if(temp_num == 4){roman.push_back('V');} 
                else if(temp_num == 9){roman.push_back('X');}
            } 
            num = num - (temp_num*size);
            size = size/10;
        }
        return roman;
    }
};