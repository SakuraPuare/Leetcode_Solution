/* 744寻找比目标字母大的最小字母 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<char> letters = {'c', 'f', 'j'};
    char target = 'k';
    if (target >= letters.back())
        cout << letters.front();
    else
    {
        for (auto &i : letters)
        {
            if (i >= target)
                cout << i;
        }
    }
}