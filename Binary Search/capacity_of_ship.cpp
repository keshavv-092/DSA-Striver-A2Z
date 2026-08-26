#include <bits/stdc++.h>
using namespace std;
bool CheckCapacity(vector<int> &weights, int days, int capacity)
{
    int weightSum = 0;
    int Tdays = 1;
    for (int i = 0; i < weights.size(); i++)
    {
        if (weightSum + weights[i] > capacity)
        {
            Tdays++;
            weightSum = weights[i];
        }
        else
        {
            weightSum += weights[i];
        }
    }
    if (Tdays <= days)
        return true;
    else
        return false;
}
int shipWithinDays(vector<int> &weights, int days)
{
    int low = *max_element(weights.begin(), weights.end());
    int high = accumulate(weights.begin(), weights.end(), 0);
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (CheckCapacity(weights, days, mid))
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }
    return low;
}
int main(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int d = 5 ;
    cout << shipWithinDays(v,d) << endl;
    return 0;
}