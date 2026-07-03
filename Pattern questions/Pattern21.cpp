#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "enter value of n ";
    cin >> n ;
    for(int i =0; i<n ; i++){
        cout << "*";
    }
    cout << endl;
    for(int i =0; i<n-2 ; i++){
        cout << "*";
        for(int k =0 ;k< n-2 ; k++){
                cout << " ";
            }
        cout << "*";
        cout << endl;
    }
    for(int i =0; i<n ; i++){
        cout << "*";
    }
    cout << endl;
    
    return 0;
}