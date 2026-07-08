#include<iostream>
using namespace std;
void swapp(int i , int a[] , int n){
    if(i>=n/2) return ;
    swap(a[i] , a[n-i-1]);
    swapp(i+1  , a , n);
}
int main(){
    int n ;
    cout<< "Size of array ";
    cin >> n;
    int a[n];
    cout<< "enter elements of array " ;
    for(int i =0 ; i<n ; i++) {
        cin >> a[i]  ;
        cout << " ";
    }
    swapp(0 , a , n);
    for(auto i:a){
        cout<< i << " " ;
    }
    return 0;
}