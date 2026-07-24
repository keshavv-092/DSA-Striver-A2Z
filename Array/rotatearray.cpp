#include<iostream>
using namespace std;
void rotate(int a[],int n){
    int temp = a[0];
    for(int i=1;i<n;i++){
        a[i-1] = a[i];
    }
    a[n-1] = temp;
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
    rotate(a,n);
    cout << "Rotated Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<endl;
    }
    return 0;
}