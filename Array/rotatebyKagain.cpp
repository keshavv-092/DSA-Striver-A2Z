#include<bits/stdc++.h>
using namespace std;
void RotateByK(int a[],int n ,int k){
    if(k==0) return ;
    k = k % n;
    reverse(a , a+k);
    reverse(a+k , a+n);
    reverse(a , a+n);
}
int main()
{
    int n;
    cout << "enter size of array ";
    cin >> n;
    int a[n];
    cout << "enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cout << "How many times to rotate ? ";
    cin >> k;
    RotateByK(a, n, k);
    cout << "Rotated Array" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}