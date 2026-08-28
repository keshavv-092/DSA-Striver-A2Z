#include <bits/stdc++.h>
using namespace std;
bool checkCows(vector<int> &stalls, int cows, int dist)
{
    int countCows = 1;
    int last = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - last >= dist)
        {
            countCows++;
            last = stalls[i];
        }
    }
    if (countCows >= cows)
        return true;
    else
        return false;
}
int minDistanceBtwCows(vector<int> &stalls, int cows)
{
    sort(stalls.begin(), stalls.end());
    int low = 0;
    int high = stalls[stalls.size() - 1] - stalls[0];
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (checkCows(stalls, cows, mid))
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return high;
}
int main()
{
    vector<int> v = {0, 3, 4, 7, 9, 10};
    int c = 4;
    cout << minDistanceBtwCows(v, c) << endl;
    return 0;
}