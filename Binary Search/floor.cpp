#include<bits/stdc++.h>
using namespace std;
int floor(vector<int> v, int target)
{
    int low = 0, high = v.size() - 1, ans = target;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (v[mid] <= target)
        {
            ans = mid;
            low = mid + 1;
        }
        else
            high = mid -1;
    }
    return ans; 
}
int main()
{
    vector<int> v = {1, 2, 5, 7, 10, 22, 40};
    int t = 8;
    cout <<floor(v, t);
    return 0;
}