#include<iostream>
using namespace std;
int main(){
    int n  ;
    cout << "enter value of n ";
    cin >> n ;
    string s;
    s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = n; i>0 ; i--){
        for(int j =0; j<i ; j++){
            cout << s[j] << " ";
        }
        cout << endl;
    }
}