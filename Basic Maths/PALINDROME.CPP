#include<iostream>
using namespace std ; 
int main(){
    int n , reverse = 0 , digit  ,original;
    cout << "Enter a number " << endl ;
    cin >> n ;
    original =n;
    while(n>0){
        digit = n%10;
        reverse = reverse*10 + digit;
        n = n / 10;
    }
    if(reverse == original) cout << "Number is palindrome" << endl;
    else cout << "Number is not palindrome" << endl;
    return 0;
}