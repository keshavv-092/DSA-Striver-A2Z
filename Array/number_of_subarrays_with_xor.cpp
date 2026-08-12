#include<bits/stdc++.h>
using namespace std;
int xorK(vector<int>v , int k){
    int xr = 0;
    unordered_map<int,int> mp;
    mp[xr]++;
    int count=0;
    for(int i=0; i<v.size(); i++){
        xr = xr^v[i];
        int x = xr^k;
        count+=mp[x];
    }
    return count;
}
int main(){
    vector<int> v = {1,2,3,2};
    int n =2;
    cout<< xorK(v,n);
    return 0;
}