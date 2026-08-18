#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>v,int low,int high,int target){
    if(low>high) return -1;
    int mid = (low+high)/2;
    if(v[mid]==target) return mid;
    else if (v[mid]<target) return binarySearch(v,mid+1,high,target);
    else return binarySearch(v,low,mid-1,target);
}
int main(){
    vector<int> v = {1,2,3,4,6,7,8,11,14} ; //always a sorted array
    int t = 4;
    cout << binarySearch(v,0,v.size()-1,t);
    return 0;
}