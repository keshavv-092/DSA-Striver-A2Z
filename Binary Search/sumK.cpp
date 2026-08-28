#include <bits/stdc++.h>
using namespace std;
int checksum(vector<int> &nums, int mid)
{
    int countsum = 0;
    int countK = 1;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] + countsum <= mid)
        {
            countsum += nums[i];
        }
        else
        {
            countK++;
            countsum = nums[i];
        }
    }
    return countK;
}
int splitArray(vector<int> &nums, int k)
{
    int low = *max_element(nums.begin(), nums.end());
    int high = accumulate(nums.begin(), nums.end(), 0);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (checksum(nums, mid) > k)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
int main()
{
    vector<int> v = {12, 34, 67, 90};
    int m = 2;
    cout << splitArray(v, m) << endl;
    return 0;
}