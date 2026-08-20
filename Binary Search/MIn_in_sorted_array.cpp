#include<bits/stdc++.h>
using namespace std;
int mini(vector<int>& nums){
    int low = 0;
    int high = nums.size()-1;
    int mini = INT_MAX;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[low]<=nums[mid]){
            mini = min(mini , nums[low]);
            low = mid+1;
        }
        else{
            mini = min(mini , nums[mid]);
            high = mid -1;
        }
    }
    return mini;
}
int main(){
    vector<int> nums = {4,5,6,7,1,2,3};
    cout << mini(nums);
    return 0;
}