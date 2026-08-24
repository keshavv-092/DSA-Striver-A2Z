#include <bits/stdc++.h>
using namespace std;
long long divisor(vector<int> &nums, int h)
{
    long long divisor = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        divisor += ceil((double)nums[i] / (double)h);
    }
    return divisor;
}
int smallestDivisor(vector<int> &nums, int threshold)
{
    int low = 1;
    int high = *max_element(nums.begin(), nums.end());
    while (low <= high)
    {
        int mid = (low + high) / 2;
        long long Divisor = divisor(nums, mid);
        if (Divisor <= threshold)
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return low;
}
int main(){
    vector<int> v = {2,4,5,6,20,12};
    int t = 10;
    cout << smallestDivisor(v,t);
    return 0;
}