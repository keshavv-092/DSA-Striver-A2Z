#include<iostream>
using namespace std ; 
int main(){
    int n;
    cout << " enter value of n ";
    cin >> n ;
    for(int i=n ; i>0 ; i--){
        for(int j=0 ; j<i ; j++){
            cout << "*";
        }
        for(int k=0 ; k<(2*n) - (2*i) ; k++){
            cout<< " ";
        }
        for(int l=0 ; l<i ; l++){
            cout << "*";
        }
        cout<< endl;
    }
    for(int a=0; a<n ; a++){
        for(int b=-1; b<a ; b++){
            cout << "*";
        }
        for(int c =0 ; c<2*n -2*a -2 ; c++){
            cout << " ";
        }
        for(int d=-1; d<a ; d++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
    }