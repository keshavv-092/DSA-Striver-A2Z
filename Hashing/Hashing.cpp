#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<< "Enter total elements of array ";
    cin >> n;
    int a[n];
    cout << "enter elements of array";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int hash[13] = {0};
    for(int i =0; i<n ; i++){
        hash[a[i]]+=1;
    }
    int q;
    cout << "enter total number of queries " ;
    cin >> q;
    while(q--){
        int x;
        cout<< "Enter the element to check ";
        cin >> x;
        cout << hash[x] << endl;
    }
    return 0;
}