#include<bits/stdc++.h>
using namespace std;
void selection_sort(int a[] , int n){
    int min;
    for(int i=0; i<=n-2 ; i++){
        min = i;
        for(int j=i; j<=n-1; j++){
            if(a[j]<a[min]) min =j;
        }
        int temp = a[min];
        a[min] = a[i];
        a[i] = temp;
    }
}
int main(){
    int n ; 
    cout << "enter size of array ";
    cin >> n;
    int a[n];
    cout << "enter elements of array ";
    for(int i=0; i<n ; i++){
        cin >> a[i];
    }
    selection_sort(a , n);
    cout << "Sorted Array " << endl;
    for( int i=0 ; i<n ; i++){
        cout << a[i] << endl;
    }
    return 0;
}