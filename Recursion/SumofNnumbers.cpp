#include<iostream>
using namespace std;
int sumN(int n){
    if(n==0){
        return 0;
    }
    return n+sumN(n-1);
}
int main(){
    int n , sum;
    cout << "enter a number ";
    cin >> n ;
    sum = sumN(n);
    cout << "Sum of first " << n << " numbers is " << sum << endl;
    return 0;
}