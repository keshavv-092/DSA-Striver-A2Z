#include<bits/stdc++.h>
using namespace std;
int sqrt(vector<int>& nums,int n){
    int low = 0;
    int high = nums.size()-1;
    int ans = -1;;
    while(low<=high){
        int mid = (low+high)/2;
        if(nums[mid]*nums[mid]==n){
            return nums[mid];
        }
        if(nums[mid]*nums[mid]<n){
            ans = nums[mid];
            low = mid+1;
        }
        else{
            high = mid -1 ;
        }
    }
    return ans;
}
int main(){
    vector<int> v = {1,2,3,6,7,8,9,10};
    int n = 49;
    cout << sqrt(v,n);
    return 0;
}