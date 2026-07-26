#include<bits/stdc++.h>
using namespace std;
void linearSearch(int a[], int n , int s){
    for(int i =0; i<n ; i++){
        if(a[i]==s) cout << i; //return i
    }
    //return -1;
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
    int s;
    cout << "enter the number you want to find " ;
    cin >> s;
    linearSearch(a,n,s);
    return 0;
}