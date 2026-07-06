#include<iostream>
using namespace std;
int main(){
    int n , N , last ;
    cout << "enter the number " << endl ;
    cin >> n;
    N = 0;
    while(n>0){
        last = n % 10;
        N = N * 10 +last;
        n = n/10;
    }
    cout << "Reversed number " << N;
    return 0;
}