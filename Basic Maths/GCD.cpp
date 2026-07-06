#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1 , n2 ;
    cout << "enter a first number "<< endl;
    cin >> n1 ;
    cout << "enter a second number "<< endl;
    cin >> n2 ;
    while(n1>0 && n2>0){
        if(n1>n2) n1 = n1%n2;
        else n2 = n2%n1;
    }  
    if(n1==0) cout << "GCD IS " << n2 ;
    else cout <<"GCD IS " << n1;
    return 0;
}