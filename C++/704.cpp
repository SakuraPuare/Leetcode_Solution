#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1;
        while (left <= right)
        {

            int mid = (left + right) / 2;
            int num = nums[mid];
            if (num == target)
            {
                return mid;
            }
            else if (num > target)
            {
                right = mid - 1;
            }
            else
                left = mid + 1;
        }
        return -1;
    }
};

int main()
{
    vector<int> nums = {-1, 0, 3, 5, 9, 12};
    int target = 2;
    Solution s;
    cout << s.search(nums, target);
}