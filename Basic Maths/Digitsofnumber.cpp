#include<iostream>
using namespace std;
int main(){
    int n , c;
    cout << "Enter value of n" << endl ;
    cin >> n ; 
    c = 0;
    while(n>0){
        n = n/10;
        c = c+1;
    }
    cout << "DIGITS IN GIVEN NUMBER ARE " << c ;
    return 0;
}