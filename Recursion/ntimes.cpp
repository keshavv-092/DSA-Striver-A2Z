#include<iostream>
using namespace std;
void printer(int i ,int n){
   if(i>n) return;
   cout << "HELLO WORLD"<< endl;
   printer(i+1 , n);
}
int main(){
    int n ; 
    cout << "enter a number " << endl;
    cin >> n;
    printer(1 , n);
    return 0;
}