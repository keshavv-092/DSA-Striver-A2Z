#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter value of n";
    cin >> n;
    for(int i=0; i<n ; i++){
        for(int j =-1 ; j<i ; j++){
            cout << "*";
        }
        for(int k =0; k< 2*n -2*i -2 ; k++){
            cout << " ";
        }
        for(int l =-1 ; l<i ; l++){
            cout << "*";
        }
        cout << endl;
    }
    for(int a=n ; a>0 ; a--){
        for(int b = 0 ; b<a ; b++){
            cout << "*";
        }
        for(int c=0 ; c< 2*n -2*a ; c++){
            cout << " ";
        }
        for(int d=0 ; d<a ; d++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}