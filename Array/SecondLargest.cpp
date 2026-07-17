#include<iostream>
using namespace std;
void second(int a[] ,int n){
    int largest=0;
    int slargest =0 ;
    int id ;
    for(int i=0; i<n; i++){
        if(largest<a[i]){
            slargest = largest;
            largest = a[i];
        }
        else if(largest>a[i] && slargest<a[i]){
            slargest =a[i];
        }
    }
    cout << slargest << endl;
}
int main(){
    int n;
    cout << "enter size of array ";
    cin >> n;
    int a[n];
    cout << "enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    second(a,n);
    return 0;
}