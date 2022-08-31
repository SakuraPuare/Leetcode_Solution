/*1046. 最后一块石头的重量*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> stones = {2,2};

    for (int i = stones.size() - 1; i >= 1; i--)
    {
        sort(stones.begin(), stones.end());
        int ans = abs(stones[i] - stones[i - 1]);
        stones.pop_back();
        stones.pop_back();
        if (ans != 0)
            stones.push_back(ans);
    }
    cout << stones.front();
}