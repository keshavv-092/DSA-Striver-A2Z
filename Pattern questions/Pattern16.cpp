#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cout << "enter value of n";
    cin >> n ;
    s ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i = 0; i<n ; i++){
        for(int j=-1; j<i ; j++){
            cout << s[i] << " ";
        }
        cout << endl;
    }
}