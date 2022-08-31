/*
9. 回文数
给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。

回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

例如，121 是回文，而 123 不是。
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    /*
    特殊情况
        if (x < 0)
            return false;
        if (x == 0)
            return true;
    */

    // 常规解法
    bool isPalindrome(int x)
    {
        
    }
    
    // STL reverse函数
    // bool isPalindrome(int x)
    // {
    //     string s = to_string(x);
    //     string sr = s;
    //     reverse(sr.begin(), sr.end());
    //     if (s == sr)
    //         return true;
    //     else
    //         return false;
    // }
};

int main()
{
    Solution s;
    std::cout << s.isPalindrome(121) << std::endl;
    std::cout << s.isPalindrome(123) << std::endl;
    return 0;
}