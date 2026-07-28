#include<bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int>a,int n){
    int maxi = INT_MIN;
    vector<int> leader;
    for(int i=n-1; i>=0; i--){
        if(a[i]>maxi){
            leader.push_back(a[i]);
        }
        maxi = max(maxi , a[i]);
    } 
    sort(leader.begin(),leader.end());
    for(auto it: leader){
        cout << it << " " ;
    }
    return leader;
}
int main(){
    int n;
    cout << "enter size of array ";
    cin >> n;
    vector<int> a(n);
    cout << "enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    leaders(a,n);
    return 0;
}