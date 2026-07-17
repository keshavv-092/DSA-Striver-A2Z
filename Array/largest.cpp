#include<bits/stdc++.h>
using namespace std;
void largest(int a[] , int n){
    int max=0;
    for(int i =0; i<n ; i++){
        if(max<a[i]){
            max =a[i];
        }
    }
    cout << max << endl;
}
int main(){
    int n;
    cout << "enter size of array ";
    cin >> n;
    int a[n];
    cout << "enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    largest(a,n);
    return 0;
}