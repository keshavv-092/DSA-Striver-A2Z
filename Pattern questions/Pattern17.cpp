#include<iostream>
using namespace std;
int main(){
    int n;
    string s;
    cout << "enter value of n";
    cin >> n ;
    s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for(int i =0; i<n ; i++){
        for(int j =0 ; j<n-i-1 ; j++){
            cout << " ";
        }
        for(int k = 0 ; k< (2*i +1)/2  ; k++){
            cout << s[k];
        }
        for(int a = (2*i +1)/2; a>-1 ; a-- ){
                cout << s[a];
            }
           
        for(int l =0; l<n-i-1 ; l++){
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}