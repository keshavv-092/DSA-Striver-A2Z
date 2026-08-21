#include<bits/stdc++.h>
using namespace std;
int arrayRotation(vector<int>& nums){
    int low = 0;
    int high = nums.size()-1;
    int mini = INT_MAX;
    int count;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[low]<=nums[mid]){
            if(nums[low]<mini){
                mini = nums[low];
                count = low;
            }
            low = mid+1;
        }
        else{
            if(nums[mid]<mini){
                mini = nums[mid];
                count = mid;
            }
            high = mid -1;
        }
    }
    return count;
}
int main(){
    vector<int> nums = {4,5,6,7,8,1,2,3};
    cout << arrayRotation(nums);
    return 0;
}