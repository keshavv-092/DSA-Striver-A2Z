#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> v, int target)
{
    int low = 0;
    int high = v.size() - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (v[mid] == target)
            return mid;
        else if (target > v[mid])
        {

            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}
int main(){
    vector<int> v = {1,2,3,4,6,7,8,11,14} ; //always a sorted array
    int t = 4;
    cout << binarySearch(v,t);
    return 0;
}