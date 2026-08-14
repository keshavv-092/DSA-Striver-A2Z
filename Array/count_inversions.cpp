#include<bits/stdc++.h>
using namespace std;
int merge(vector<int>v,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    int count=0;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(v[left]>v[right]){
            count=mid-left+1;
            temp.push_back(v[right]);
            right++;
        }
        else{
            temp.push_back(v[left]);
            left++;
        }
    }
    if(left<=mid){
        temp.push_back(v[left]);
        left++;
    }
    if(right<=high){
        temp.push_back(v[right]);
        right++;
    }
    for(int i=low; i<=high; i++){
        v[i] = temp[i-low];
    }
    return count;
}
int merge_sort(vector<int>v,int low,int high){
    int count=0;
    if(low>=high) return count ;
    int mid = (low+high)/2;
    count+=merge_sort(v,low,mid);
    count+=merge_sort(v,mid+1,high);
    count+=merge(v,low,mid,high);
    return count;
}
int numberOfInversions(vector<int>& a, int n) {
    return merge_sort(a, 0, n - 1);
}
int main(){
    vector<int> a = {5, 4, 3, 2, 1};
    cout << numberOfInversions(a,a.size()) ;
    return 0;
}
