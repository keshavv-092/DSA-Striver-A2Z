#include <bits/stdc++.h>
using namespace std;
int singleNonDuplicate(vector<int> &nums)
{
    if (nums.size() == 1)
        return nums[0];
    if (nums[0] != nums[1])
        return nums[0];
    if (nums[nums.size() - 1] != nums[nums.size() - 2])
        return nums[nums.size() - 1];
    int low = 1;
    int high = nums.size() - 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }
        if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) || (mid % 2 == 0 && nums[mid] == nums[mid + 1]))
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main(){
    vector<int> v = {1,1,3,3,4,4,5,5,6,7,7};
    cout << singleNonDuplicate(v);
    return 0;
}