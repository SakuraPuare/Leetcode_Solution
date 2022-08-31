#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    // long long arrangeCoins(int n)
    // {
    //     long long sum = 0;
    //     for (int i = 1; i <= n; i++)
    //     {
    //         sum += i;
    //         if (sum > n)
    //         {
    //             return i - 1;
    //         }
    //     }
    //     return 1;
    // }

    // long long arrangeCoins(int n)
    // {
    //     for (int i = 1; i <= n; i++)
    //     {
    //         long long sum = (i * i + i) / 2;
    //         if (sum > n)
    //         {
    //             return i - 1;
    //         }
    //     }
    //     return 1;
    // }

    long long arrangeCoins(long n)
    {
        // n2 + n - 2sn = 0
        long delta = 1 + 8 * n;
        int ans = (sqrt(delta) - 1) / 2;
        return ans;
    }

    // long long arrangeCoins(int n)
    // {
    //     int left = 1, right = n;
    //     while (left < right)
    //     {
    //         int mid = (left + right) / 2;
    //         long long ans = (mid * (mid + 1));
    //         if (ans <= 2 * n)
    //             left = mid;
    //         else
    //             right = mid - 1;
    //     }
    //     return left;
    // }
};

// 1 - 1
// 2 - 2 = 3
// 3 - 3 = 6

// a1 = 1
// d = 1

// an = a1+d(n-1)
// sn = (a1+an)*n/2

// 1 + 1 * 1

int main()
{
    int n = 0;
    cin >> n;
    Solution s;
    cout << s.arrangeCoins(n) << endl;
}