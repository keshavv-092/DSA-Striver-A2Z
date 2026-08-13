#include <bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> &nums)
{
    long long maxi = INT_MIN;
    long long left = 1;
    long long right = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (left == 0)
            left = 1;
        if (right == 0)
            right = 1;
        left = left * nums[i];
        right = right * nums[nums.size() - i - 1];
        maxi = max(maxi, max(left, right));
    }
    return maxi;
}
int main()
{
    vector<int> v = {1, 32, 32, 1, -1, 23, 123, 23, 1, -1};
    cout << maxProduct(v);
    return 0;
}