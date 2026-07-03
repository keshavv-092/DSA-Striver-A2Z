#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "enter value of n";
    cin>> n ;
    for(int i=0;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            cout<<" ";
        }
        for(int k=0; k< 2*i +1; k++){
            cout<<"*";
        }
        for(int l=0;l<=n-i-1;l++){
            cout<<" ";
        }
        cout<<endl;
    }
    for(int a = 0 ; a<n ; a++){
        for(int b=-1; b<a ; b++){
            cout<< " ";
        }
        for(int k=0; k<2*n-(2*a +1) ; k++){
            cout << "*";
        }
        for(int c=0; c<a; c++){
            cout<< " ";
        }
        cout<< endl ;
    }
    return 0;
}