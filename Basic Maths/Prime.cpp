#include<iostream>
using namespace std;
int main(){
    int n , c;
    c=0;
    cout<< "enter a number " << endl;
    cin >> n ;
    for(int i = 1; i*i < n; i++){
        if(n%i == 0){
            c+=1;
            if(n/i != i) c+=1;
        }
    }
    if(c==2) cout << "the given number is a prime ";
    else cout << "the given number is not prime ";
    return 0;
}