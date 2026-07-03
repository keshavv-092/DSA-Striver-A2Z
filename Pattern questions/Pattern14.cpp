#include<iostream>
using namespace std;
int main(){
    int n ;
    string s ;
    cout << "enter value of n ";
    cin >> n ;
    s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i =1; i<n+1; i++){
        for(int j = 0; j<i; j++){
            cout << s[j] << " ";
        }
        cout << endl;
    }
}