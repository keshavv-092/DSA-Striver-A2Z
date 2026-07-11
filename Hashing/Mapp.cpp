#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "enter number of elements ";
    cin >> n;
    int a[n];
    cout << "Enter elements of array ";
    for(int i =0; i<n; i++){
        cin >> a[i];
    }
    unordered_map<int , int> mpp;
    for(int i = 0; i<n ; i++){
        mpp[a[i]]+=1;
    }
    int q;
    cout << "enter number of queries ";
    cin >> q;
    while(q--){
        int x;
        cout << "element you want to check ";
        cin >> x;
        cout << mpp[x] << endl;
    }
    return 0;
}