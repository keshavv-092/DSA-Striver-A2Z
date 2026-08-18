#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> v, int target)
{
    int low = 0, high = v.size() - 1, ans = target;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (v[mid] > target)
        {
            ans = mid;
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return ans;
}
int main()
{
    vector<int> v = {10, 20, 53, 72, 110, 122, 340};
    int t = 5;
    cout << lowerBound(v, t);
    return 0;
}