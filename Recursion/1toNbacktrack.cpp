#include<iostream>
using namespace std;
void print(int n){
    if(n<1) return;
    print(n-1);
    cout << n << endl;
}
int main(){
    int n ;
    cout << "enter a number ";
    cin >> n;
    print(n);
    return 0;
}