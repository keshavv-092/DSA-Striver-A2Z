#include<bits/stdc++.h>
using namespace std;
int search(vector<int>v,int target){
    int low = 0;
    int high = v.size()-1;
    while(low<=high){
        int mid = (low+high)/2;
        if(v[mid]==target){
            return mid ; 
        }        
        if(v[mid]==v[low] && v[mid]==v[high]){
            low++; 
            high--;
            continue;
        }
        if(v[low]<=v[mid]){
            if(v[low]<=target && target <= v[mid]){
                high = mid -1;
            }
            else low = mid +1;
        }
        else{
            if(v[mid]<=target && v[high]>=target){
                low = mid +1;
            }
            else high = mid -1;
        }
    }
    return -1;
}
int main(){
    vector<int> v = {7,8,9,10,4,5,6};
    int t =9;
    cout << search(v,t) ;
    return 0;
}