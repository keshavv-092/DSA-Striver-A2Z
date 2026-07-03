#include<iostream>
using namespace std;
int main(){
    int n;
    cout << " enter value of n";
    cin >> n ;
    for(int i=1; i<n; i++){
        for(int j=0; j<i ; j++){
            cout << j+1;
        }
        for(int k=1; k<(2*n) -(2*i) ; k++ ){
            cout << " ";
        }
        for(int l=0; l<i ; l++){
            cout << l+1;
        }
        cout << endl ;
    }
    return 0;
}