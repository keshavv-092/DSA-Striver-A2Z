#include<bits/stdc++.h>
using namespace std;
int partition(vector<int>& v , int low , int high){
    int pivot = v[low];
    int left = low ;
    int right = high;
    while(low<high){
        while(v[left] < pivot && left <= high-1){
            left++;
        }
        while(v[right] > pivot && right >= left+1){
            right--;
        }
        if(left<right) swap(v[left] , v[right]);
    }
    swap(v[low] , v[right]);
    return right;
}
void qs(vector <int>& v , int low , int high){
    if(low<high){
        int pIndex = partition(v , low , high);
        qs(v , low , pIndex-1);
        qs(v , pIndex+1 , high);
    }
}
int main(){
    return 0;
}