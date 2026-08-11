#include<bits/stdc++.h>
using namespace std;
void subarray(vector<int>v){
    int maxi = INT_MIN;
    unordered_map<int ,int> mp;
    int sum =0;
    for(int i =0 ; i<v.size(); i++){
        sum+=v[i];
        if(mp.find(sum)!=mp.end()){
            maxi = max(maxi , i-mp[sum]);
        }
        else{
            mp[sum]=i;
        }
    }
    cout << maxi << endl;
}
int main(){
    vector<int> v = {1,-1,3,2,-2,-8,1,7,10,23};
    subarray(v);
    return 0;
}