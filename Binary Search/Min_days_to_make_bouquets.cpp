#include <bits/stdc++.h>
using namespace std;
bool days(vector<int> &bloomDay, int m, int k, int d)
{
    int count = 0;
    int bloom = 0;
    for (int i = 0; i < bloomDay.size(); i++)
    {
        if (bloomDay[i] <= d)
        {
            count++;
        }
        else
        {
            bloom += count / k;
            count = 0;
        }
    }
    bloom += count / k;
    if (bloom >= m)
        return true;
    else
        return false;
}
int minDays(vector<int> &bloomDay, int m, int k)
{
    if (bloomDay.size() < (long long)m * k)
        return -1;
    int low = *min_element(bloomDay.begin(), bloomDay.end());
    int high = *max_element(bloomDay.begin(), bloomDay.end());
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (days(bloomDay, m, k, mid))
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return low;
}
int main(){
    vector<int> v = {1,10,3,10,2};
    cout << minDays(v,3,1);
    return 0;
}