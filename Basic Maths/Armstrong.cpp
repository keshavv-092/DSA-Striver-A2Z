#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n , arm =0 , digit , original , totaldigits;
    cout << "enter a number" << endl ;
    cin >> n ; 
    if(n == 0) totaldigits =1;
    else  totaldigits = int(log10(n)) +1;
    original = n;
    while(n>0){
        digit = n%10;
        arm = arm + (int)pow(digit,totaldigits);
        n/=10;
    } 
    if(arm == original) cout << "It is an armstrong number";
    else cout << "It is not an armstrong number";
    return 0;
}