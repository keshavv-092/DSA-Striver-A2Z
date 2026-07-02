#include<iostream>
using namespace std;
int value(int a){
    a=a+1;
    cout << a << endl;
    return 0;
}
int reference(int &a){
    a=a+1;
    cout << a << endl;
    return 0 ;
}
int main(){
    int a=10;
    value(a);
    cout << a << endl;
    reference(a);
    cout << a << endl;
    return 0;
}