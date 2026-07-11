#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cout << "enter size ";
    cin >> n;
    int a[n];
    cout << "enter values ";
    for(int i =0; i<n ; i++){
        cin >> a[i];
    }
    unordered_map<int , int> mpp;
    for(int i=0; i<n; i++){
        mpp[a[i]] += 1;
    }
}
