#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter value of n" << "\n";
    cin >> n ;
    for(int i=n ; i>0; i--){
        for(int j= 0; j<i ; j++){
            cout << i ;
        }
        cout<< endl;

    }
    return 0;
}