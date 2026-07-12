#include<bits/stdc++.h>
using namespace std;
void insertion(int a[] , int n){
    for(int i =0 ; i<=n-1 ; i++){
        int j =i;
        while(j>0 && a[j-1] > a[j]){
            int temp = a[j-1];
            a[j-1] = a[j];
            a[j] = temp;
            j--;
        }
    }
}
int main(){
    int n ;
    cout << "enter size of array ";
    cin >> n;
    int a[n];
    cout << "enter elements of array ";
    for(int i =0; i<n ; i++){
        cin >> a[i] ;
    }
    insertion(a ,n);
    cout <<"sorted array "<< endl ;
    for(int i =0; i<n ; i++){
        cout << a[i] << endl ;
    }
}