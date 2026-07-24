#include<iostream>
using namespace std;
void isSorted(int a[],int n){
    for(int i=1;i<n;i++){
        if(a[i]>=a[i-1]);
        else cout << "false"<<endl;
    }
    cout <<"true"<<endl;
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
    isSorted(a,n);
    return 0;
}