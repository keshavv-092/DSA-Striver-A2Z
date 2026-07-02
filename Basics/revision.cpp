#include<iostream>
using namespace std;
int main(){
    cout << "World" <<"\n";
    int x;
    cout << "Hello" <<"\n";
    cout << " enter a number: ";
    cin >> x;
    cout << x;
    if(x%2==0){
        cout << " is even";
    }
    else{
        cout << " is odd";
    }
    for(int i = -1  ; i < x ; i++){
        cout << i << "\n";
    }
    switch(x){
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        default:
            cout << "not one or two";
    }
    return 0;
    while(x>0){
        cout << x << "\n";
        x--;
    }
    
}